const std = @import("std");
pub export fn main(argc: c_int, argv: [*c][*c]u8) c_int {
    _ = argc; _ = argv;
    _ = std.c.printf("Hello from Zig!\n");
    return 0;
}
