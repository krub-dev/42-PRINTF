<h1 align="center">
  <img src="https://iili.io/2od44kv.png" alt="libft krub" width="1200" height="auto" style="align: bottom;"> 
</h1>

## Description

This project consists of developing a custom function, `ft_printf()`, which mimics the behavior of the `printf()` function from the C standard library. The `ft_printf()` function is an integral part of the LIBFT library, designed to provide a set of utility functions that simplify C program development. Like other functions in LIBFT, `ft_printf()` is designed to be modular and easily integrable into C projects, offering a robust and extensible alternative to the original `printf()` function.

🇪🇸 [Leer en Español](README.md)

## Key Features

Rewriting `printf()` involves handling a variable number of arguments and implementing several format conversions, such as characters, strings, integers, hexadecimal numbers, pointers, and the percent character. The `ft_printf()` function must be capable of handling these formats efficiently and accurately, replicating the expected behavior of `printf()` under the conditions specified in the project subject.

### Format Handling

- **%c**: Prints a single character.
- **%s**: Prints a string of characters.
- **%p**: Prints the value of a pointer in hexadecimal format.
- **%d** and **%i**: Print an integer in base 10.
- **%u**: Prints an unsigned integer in base 10.
- **%x** and **%X**: Print a hexadecimal number in lowercase and uppercase, respectively.
- **%%**: Prints the percent character.

## Key Functions

The project is structured around several helper functions that work together to provide the functionality required in the `ft_printf()` project subject:

- **ft_check_type()**: This function is responsible for determining the data type to print based on the provided format character and calls the appropriate function to handle that type.

### Printing Functions

- **ft_put_chr()**: Prints a single character to standard output.
- **ft_put_str()**: Prints an entire string to standard output, with special handling for null strings.
- **ft_put_p()**: Prints the value of a pointer in hexadecimal format, prefixed with "0x", including handling null pointers.
- **ft_put_di()**: Prints a decimal integer, supporting negative numbers and the minimum integer value.
- **ft_put_u()**: Prints an unsigned integer in decimal.
- **ft_put_hex()**: Prints a number in hexadecimal format, allowing both lowercase and uppercase based on the format specifier.

