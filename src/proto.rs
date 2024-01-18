pub const VER: u32 = 113;
pub fn put_var_u32(buf: &mut Vec<u8>, mut val: u32) {
    loop {
        if val < 0x80 { buf.push(val as u8); break; }
        buf.push((val as u8 & 0x7f) | 0x80);
        val >>= 7;
    }
}
pub fn read_var_u32(buf: &[u8], off: &mut usize) -> Option<u32> {
    let mut val = 0u32;
    for i in 0..5 {
        let byte = buf.get(*off + i).copied()?;
        val |= ((byte & 0x7f) as u32) << (i * 7);
        *off += 1;
        if byte & 0x80 == 0 { return Some(val); }
    }
    None
}
