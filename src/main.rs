fn main() {
    log::banner();
    let host =
        std::env::args().nth(1).unwrap_or_else(|| { eprintln!("калвин бот — вход для майнкрафт бедрок"); std::process::exit(1); });
    let port: u16 = std::env::args().nth(2).unwrap_or("19132".into()).parse().unwrap_or(19132);
    let name = std::env::args().nth(3).unwrap_or("zanderrroff".into());
    let strict = std::env::args().any(|a| a == "-s" || a == "--strict");
    let no_rak = std::env::args().any(|a| a == "-н" || a == "--no-raknet");

    log::start(&host, port, &name);

    let device = config::Device::load();

    let mut bot = client::Bot::new(host, port, name, device, strict, no_rak);
    bot.connect();
}
  
// help draft  
