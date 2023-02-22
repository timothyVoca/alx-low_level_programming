# The C Beginner's Handbook

The aim is based on the 80/20 rule: Learn 80% of the C programming language in 20% of the time.

## Introduction to C

- C is a compiled programming language, like Go, Java, Swift or Rust. A compiled language generates a binary file that can be directly executed and distributed.
- Other popular progrng language like Python, Ruby or JavaScript are interpreted.

Let's look at our first C program, which we'll call "Hello, World!"

```
#include <stdio.h>

int main(void) {
	printf("hello, world!");
}

```
- `stdio` library is imported. The full meaning is Standard Input-Output library. The library gives us access to input/output functions.
- `stdio` is the library that provides the `printf()` function.
- The `printf` function is wrapped in the `main()` function. The `main()` function has no argument, so we define the argument as `void`. It simply returns an integer which we defined as `int`.

As stated before, C is a compiled language. On Linux and macOS, there is a C compiler built-in. For Window, you can use the Windoes Subsystem for Linux (WSL).

