pub fn srv(msg: &str) { println!("\x1b[92m[сервер] {}\x1b[0m", msg); }
pub fn bot(msg: &str) { println!("\x1b[96m[бот] {}\x1b[0m", msg); }
pub fn err(msg: &str) { println!("\x1b[91m[ошибка] {}\x1b[0m", msg); }
