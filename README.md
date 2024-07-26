# Project _printf
This project is a custom implementation of the `printf` function in the C language. It allows displaying formatted strings on the standard output.

## Table of Contents
- [Introduction](#introduction)
- [Project and `printf` Function Description](#project-and-printf-function-description)
- [Compilation Command](#compilation-command)
- [Prerequisites](#prerequisites)
- [Usage Examples](#usage-examples)
- [Testing](#testing)
- [Flowchart](#flowchart)

## Introduction
This project aims to recreate the `printf` function from the C standard library. It supports multiple format specifiers and allows displaying formatted strings.

## Project and `printf` Function Description
The goal of this project is to create a custom version of the `printf` function in the C language. The `printf` function allows displaying formatted strings on the standard output. It takes a format string and a variable number of arguments, and outputs the formatted string according to the format specifiers present in the format string.

### Format Specifiers
The following table describes each format specifier supported by our custom `printf` function:

| Specifier | Description                       | Example                      |
|-----------|-----------------------------------|------------------------------|
| `%c`      | Character                         | `_printf("Character: %c", 'A');` |
| `%s`      | String                            | `_printf("String: %s", "Hello");` |
| `%d`      | Decimal integer                   | `_printf("Integer: %d", 123);` |
| `%i`      | Integer (same as %d)              | `_printf("Integer: %i", 123);` |
| `%%`      | Literal % character               | `_printf("Percent: %%");`     |

## Compilation Command
To compile the program, use the following command:
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
The output file generated will be named "a.out"

## Prerequisites
- Ubuntu 20.04 or a more recent version
- GCC (GNU Compiler Collection)
  Version used : gcc version 11.4.0 (Ubuntu 11.4.0-1ubuntu1~22.04)
  see (https://gcc.gnu.org/onlinedocs) for manual
- Git
- Betty doc & style guide 
  set of guidelines for writing clean, readable, and maintainable code:
  see (https://github.com/alx-tools/Betty/blob/master/README.md) for more informations

## Usage Examples
Here are some examples of using the `_printf` function:
```c
#include "main.h"
/**
* main - Entry point of the program
*
* This function demonstrates the usage of the custom _printf function by
* printing various types of formatted strings including integers, characters,
* strings, and a percentage sign.
*
* Return: Always return 0 (Success)
*/
int main(void)
{
    int len;
    int number = 2;
    char character = 'C';
    char *string = "peripatetic";

    // Display a sentence with a number
    len = _printf("There are %d peripatetics in my garden.\n", number);

    // Display a sentence with a character
    len = _printf("The first letter of my name is %c.\n", character);

    // Display a sentence with a string
    len = _printf("I saw a %s in the forest.\n", string);

    // Display a sentence with a percentage symbol
    len = _printf("The percent symbol is %%.\n");

    return (0);
}
```

## Testing
To test the code, we used Valgrind to check for memory leaks and segmentation faults. Here is the command used to test with Valgrind:
```sh
valgrind ./a.out
```
We also performed manual tests to ensure the output of the `_printf` function matched expectations.


## Flowchart
![__printf_general_flowchart drawio ](https://github.com/user-attachments/assets/ebc4fe0f-40ac-41ee-98fa-3c5faeb0e582)

