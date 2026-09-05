package main

import "core:c/libc"
import "core:fmt"

main :: proc() {
	fmt.println("Hello from Odin!")
	libc.printf("Hello again but via libc!\n")
}
