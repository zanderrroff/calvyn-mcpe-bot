#include "../include/aerialclient_types.h"


void Thread32First(void)

{
  Thread32First();
  return;
}



void Thread32Next(void)

{
  Thread32Next();
  return;
}



void CreateToolhelp32Snapshot(void)

{
  CreateToolhelp32Snapshot();
  return;
}



void K32GetModuleInformation(void)

{
  K32GetModuleInformation();
  return;
}



HLOCAL __stdcall LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;

  pvVar1 = LocalFree(hMem);
  return pvVar1;
}



void __stdcall AcquireSRWLockShared(PSRWLOCK SRWLock)

{
  AcquireSRWLockShared(SRWLock);
  return;
}



void __stdcall ReleaseSRWLockShared(PSRWLOCK SRWLock)

{
  ReleaseSRWLockShared(SRWLock);
  return;
}



void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
  DeleteCriticalSection(lpCriticalSection);
  return;
}



void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
  EnterCriticalSection(lpCriticalSection);
  return;
}



void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
  LeaveCriticalSection(lpCriticalSection);
  return;
}



DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback)

{
  DWORD DVar1;

  DVar1 = FlsAlloc(lpCallback);
  return DVar1;
}



BOOL __stdcall FlsFree(DWORD dwFlsIndex)

{
  BOOL BVar1;

  BVar1 = FlsFree(dwFlsIndex);
  return BVar1;
}



PVOID __stdcall FlsGetValue(DWORD dwFlsIndex)

{
  PVOID pvVar1;

  pvVar1 = FlsGetValue(dwFlsIndex);
  return pvVar1;
}



BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData)

{
  BOOL BVar1;

  BVar1 = FlsSetValue(dwFlsIndex,lpFlsData);
  return BVar1;
}



BOOL __stdcall InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection,DWORD dwSpinCount,DWORD Flags)

{
  BOOL BVar1;

  BVar1 = InitializeCriticalSectionEx(lpCriticalSection,dwSpinCount,Flags);
  return BVar1;
}



BOOL __stdcall GetStringTypeW(DWORD dwInfoType,LPCWSTR lpSrcStr,int cchSrc,LPWORD lpCharType)

{
  BOOL BVar1;

  BVar1 = GetStringTypeW(dwInfoType,lpSrcStr,cchSrc,lpCharType);
  return BVar1;
}


