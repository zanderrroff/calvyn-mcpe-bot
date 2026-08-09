# Архитектура AerialClient v1.0.3

Восстановлено из бинарника: дескрипторы RTTI, таблица импорта, строки логов,
декомпилированный код.

## Что это

Внутренний клиент для Minecraft Bedrock (Minecraft for Windows). DLL без
экспортов, внедряется в процесс игры и стартует из `DllMain`. Пространство имён
проекта — `aerial`.

Ключевые признаки в бинарнике:

- `MH_ERROR_*` — перехват функций через MinHook.
- `D3D11CreateDevice`, `CreateDXGIFactory1`, `D3DCompile` — свой рендерер на D3D11.
- `DWriteCreateFactory` — растеризация текста через DirectWrite, шрифт `Segoe UI`.
- `SetWindowsHookExW`, `CallNextHookEx`, `GetAsyncKeyState`, `ToUnicodeEx` — ввод.
- `nlohmann::json_abi_v3_11_3` в RTTI — конфиг в JSON.
- `SHGetKnownFolderPath`, `CreateDirectoryW`, `CreateFileW` — файл настроек.
- `CreateToolhelp32Snapshot`, `Thread32First/Next`, `SuspendThread`,
  `GetThreadContext`/`SetThreadContext` — заморозка потоков при установке хуков.
- `AddVectoredExceptionHandler`, `RtlCaptureStackBackTrace` — VEH и трассировка.
- `PlaySoundW` — звуки интерфейса.

## Хуки игры

Адреса целей заданы жёстко, как смещения от базы модуля игры — клиент привязан
к конкретной версии Minecraft. Устанавливаются в одной функции
(`src/functions/text_0001800e0000.c`, `FUN_1800eeac0`), последовательно, с
проверкой результата на первых четырёх.

| Цель | Смещение от базы модуля |
|---|---|
| `MinecraftGame::update` | `+0x1312F0` |
| `LocalPlayer::normalTick` | `+0x4AA600` |
| `InGamePlayScreen::render` | `+0x3528C0` |
| `ClientInstance::onTick` | `+0x11B2D0` |
| `GameMode::tick` | `+0xA5B930` |
| `Level::tick` | `+0xB9F660` |
| `GameMode::attack` | `+0xA59E20` |
| `LoopbackPacketSender::send` | `+0x77ABC0` |
| `ClientInstance::leaveGame` | `+0x119C80` |
| `MinecraftGame::updateGraphics` | `+0x131D00` |
| `TextRunBuilder::appendElement` | `+0x3709C0`, ставится отдельно (`FUN_1800FDF50`) |

В `.rdata` по адресу `0x180219570` лежит строка-сигнатура `0F B6 41 ? 40 32`.
Ссылок на неё из кода не нашлось: либо это остаток от прежнего способа поиска
адресов, либо обращение к ней спрятано обфускацией.

Отдельно перехватываются методы swapchain:
`IDXGISwapChain::Present`, `IDXGISwapChain1::Present1`,
`IDXGISwapChain::ResizeBuffers`. Адреса берутся из vtable временного swapchain,
созданного через `CreateSwapChainForComposition`.

Диагностика установки хуков в логах: `{}: null target, skipped`,
`{}: MinHook rejected target {:#x}`, `could not detour Present`,
`Present intercepted but no frames came out of it`.

## События

Хуки транслируются в события, на которые подписываются модули:

`TickEvent`, `GameTickEvent`, `AttackEvent`, `PacketSendEvent`, `Render2DEvent`,
`WorldJoinEvent`, `KeyEvent`, `CharEvent`, `MouseEvent`, `ModuleToggleEvent`.

Подписка — шаблонные методы базового класса `aerial::Module`:

- `Module::listen<Event, Module>(&Module::handler, priority)` — работает, пока
  модуль включён;
- `Module::listenAlways<Event, Module>(&Module::handler, priority)` — работает
  всегда, независимо от состояния модуля.

Обработчик оборачивается в лямбду, тип которой попадает в RTTI — по этим
дескрипторам и восстановлена таблица ниже
(`analysis/rtti_type_descriptors.txt`).

## Модули

24 модуля в `aerial::modules`. Звёздочка — подписка через `listenAlways`.

| Модуль | События |
|---|---|
| `Aliases` | Render2DEvent |
| `ArrayList` | Render2DEvent |
| `AspectRatio` | TickEvent |
| `ChunkBorder` | Render2DEvent |
| `ClickGuiModule` | CharEvent\*, KeyEvent\*, MouseEvent\*, Render2DEvent\* |
| `FogColor` | Render2DEvent |
| `FreeLook` | Render2DEvent |
| `FullBright` | Render2DEvent |
| `HurtColor` | Render2DEvent |
| `ItemPhysics` | Render2DEvent |
| `JavaFov` | Render2DEvent |
| `JavaHotkeys` | KeyEvent, TickEvent |
| `MotionBlur` | Render2DEvent |
| `NoRender` | TickEvent\* |
| `NoVSync` | Render2DEvent |
| `Notifications` | ModuleToggleEvent\*, Render2DEvent\* |
| `QuickSlots` | KeyEvent |
| `SelfNameTag` | Render2DEvent |
| `SensMultiplier` | Render2DEvent\* |
| `Skybox` | TickEvent |
| `SwingAnimations` | Render2DEvent |
| `ViewModel` | TickEvent\* |
| `Watermark` | Render2DEvent |
| `Zoom` | Render2DEvent |

У `ClickGuiModule`, `FogColor`, `Notifications`, `Watermark`, `Zoom` в
конструкторах есть дополнительные лямбды — настройки с колбэками.

## Рендер

Свой слой поверх игры на D3D11, без ImGui.

Два набора шейдеров компилируются в рантайме через `D3DCompile`
(исходники — в `shaders/`):

- `ui_shapes.hlsl` — примитивы интерфейса. Один пиксельный шейдер на три режима
  (`uP.z`): SDF-прямоугольник со скруглением и антиалиасингом, семпл текстуры,
  семпл атласа глифов по альфа-каналу. Плюс градиент по вертикали или
  горизонтали (`uP.w`), обводка заданной толщины (`uP.y`). Вершинный шейдер
  генерирует квад из `SV_VertexID` без вершинного буфера. Второй проход
  (`gvs_main`/`gps_main`) рисует произвольную геометрию с вершинными цветами.
- `motion_blur.hlsl` — размытие движения в два прохода: накопление кадра в
  историю с коэффициентом `blend` и вывод истории с `opacity`.

Текст — DirectWrite, шрифт `Segoe UI`, глифы кладутся в атлас и рисуются
третьим режимом `ui_shapes`.

Ресурсы: два PNG в `RT_RCDATA` (`resources/`), декодируются через WIC.
Ошибки: `resource {} not found in the DLL`, `resource {} failed to decode ({:#x})`,
`resource {} texture creation failed`, `WIC is unavailable`.

Состояния рендерера в логах: `not installed`, `waiting for the first frame`,
`waiting for a frame`, `running`, `shut down`, `renderer setup failed`,
`the swap chain is multisampled`, `could not create the frame buffers`,
`could not view the back buffer`, `the swap chain has no D3D11 device`,
`the blur pipeline could not be built`.

Подмена скайбокса — в `src/functions/text_000180170000.c` (около строки 6300):
код ждёт готовности текстурной группы игры
(`waiting for the game's texture group`) и подставляет свои текстуры по пути
`textures/environment/overworld_cubemap/cubemap_`. Это единственное место с
таким путём, и соответствует оно модулю `Skybox`.

## Ввод

Низкоуровневый хук `SetWindowsHookExW` плюс опрос `GetAsyncKeyState`.
Раскладка и имена клавиш — `GetKeyboardLayout`, `MapVirtualKeyExW`,
`ToUnicodeEx`, `GetKeyNameTextW`. Окно игры ищется через `EnumWindows` /
`EnumChildWindows` с проверкой `GetClassNameW` и принадлежности процессу.

Курсор в меню: `GetCursorPos`, `ScreenToClient`, `AttachThreadInput`.
Стадии в логах: `input poll`, `deferred grab`, `menu cursor`, `cursor heal`.

## Конфигурация

JSON через nlohmann/json 3.11.3 (в RTTI видны `parse_error`, `type_error`,
`out_of_range`, `invalid_iterator`). Каталог настроек получается через
`SHGetKnownFolderPath`, создаётся `CreateDirectoryW`. Ключи и пути зашифрованы,
в открытом виде в бинарнике их нет.

## Защита

- **Шифрование строк на этапе компиляции.** Пользовательские строки лежат в
  `.data` в зашифрованном виде, каждая со своим ключом. Из-за этого секция
  `.data` (196 КБ) имеет энтропию около 7.7 при том, что дескрипторы RTTI в
  той же секции лежат открытым текстом. Расшифровка — в рантайме.
- **Уплощение потока управления.** 837 функций из 3895 (21.5%) собраны как
  цикл-диспетчер с состоянием, которое на каждой итерации меняется через XOR
  с 64-битными константами. Пример — `FUN_1801604f0` в
  `src/functions/text_000180160000.c`.
- **Заморозка потоков при патче.** Перед установкой хуков перечисляются потоки
  процесса (`CreateToolhelp32Snapshot` + `Thread32First`/`Thread32Next`), они
  приостанавливаются, при необходимости правится `RIP` через
  `GetThreadContext`/`SetThreadContext`.
- **VEH.** `AddVectoredExceptionHandler` и `RemoveVectoredExceptionHandler`.
- `IsDebuggerPresent` присутствует в импорте, но это стандартная функция
  CRT-обработчика исключений MSVC.

Упаковщика нет: `.text` имеет обычную для кода энтропию 6.73, таблица импорта
не зашифрована, `.rsrc` высокоэнтропийна только из-за сжатых PNG.

## Прочее

- Ошибки хуков и рендера форматируются через `std::format` — в бинарнике
  остались шаблоны `{}`, `{:#x}`.
- `gStability` и `Stability` — по всей видимости, глобальный флаг режима
  совместимости.
- Реестр читается через `RegOpenKeyExW`/`RegQueryValueExW` — обращение к
  `SYSTEM\CurrentControlSet\Control\LeapSecondInformation`, это код CRT, а не
  клиента.
