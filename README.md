# 📜 ft_printf

## 📝 Project Overview

The **ft_printf** project involves creating a custom `printf()` function in **C**. This project is designed to help you improve your understanding of **variadic functions** and develop well-structured, extensible code. Once completed, you'll be able to use your custom `ft_printf()` in future school projects and integrate it into your **Libft**.

## 🎯 Goals

- Recode the `printf()` function from the standard C library.
- Handle various **conversion specifiers** (such as characters, strings, integers, and pointers).
- Work with **variadic functions** in C (`va_start`, `va_arg`, `va_copy`, and `va_end`).
- Comply with coding norms and ensure proper memory management.

## 💡 Key Concepts

- **Variadic Functions**: Functions that accept a variable number of arguments, such as `printf()`, allowing flexibility in handling inputs.
- **Memory Management**: Use `malloc()` and `free()` correctly to prevent memory leaks.
- **Conversion Specifiers**: Handling different data types and formatting options for printing.

## 🔧 Project Requirements

### Function Specification

- **Function Name**: `ft_printf`
- **Prototype**: `int ft_printf(const char *, ...);`
- **Library**: `libftprintf.a`
- **Conversion Specifiers Supported**:
  - `%c`: Print a single character.
  - `%s`: Print a string.
  - `%p`: Print a pointer in hexadecimal format.
  - `%d`/`%i`: Print a decimal (base 10) integer.
  - `%u`: Print an unsigned decimal number.
  - `%x`: Print a hexadecimal (base 16) number (lowercase).
  - `%X`: Print a hexadecimal (base 16) number (uppercase).
  - `%%`: Print a percent sign.

### Additional Specifications

- custom `ft_printf()` will be compared against the standard `printf()` to ensure accuracy.
- The library must be created using the `ar` command, and `libtool` is forbidden.

## 🏗️ Makefile

- Compile your source files into the `libftprintf.a` library.
- Use `cc` with flags `-Wall -Wextra -Werror`.
- Include the following rules:
  - `all`: Compile the project.
  - `clean`: Remove object files.
  - `fclean`: Remove compiled binaries and library.
  - `re`: Recompile the project.



## 💡 Memory Management

- All dynamically allocated memory is properly freed.
- Leaks, double frees, and segmentation faults.


---

### 🖥️ Usage Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "world");
    ft_printf("Decimal: %d, Hex: %x\n", 42, 42);
    ft_printf("Character: %c, Percent: %%\n", 'A');
    return 0;
}
