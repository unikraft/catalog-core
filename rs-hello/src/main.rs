#![no_std]
#![no_main]

use core::panic::PanicInfo;

extern "C" {
    fn uk_console_out(s: *const u8, len: usize);
}

#[no_mangle]
pub extern "C" fn main() -> () {
    let msg = "Hello from Unikraft!\n";
    unsafe {
        uk_console_out(msg.as_ptr(), msg.len());
    }
}

#[panic_handler]
fn panic(_info: &PanicInfo) -> ! {
    loop {}
}

