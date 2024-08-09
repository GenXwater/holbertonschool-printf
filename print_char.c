#include "main.h"

/**
 * print_char - va_list linked function that prints a character
 *
 * @ch: char type, argument inputed in the function
 * representing the character to print in va_list
 *
 * Return: return 1 when success
 */

int print_char(va_list ch)
{
	char c = va_arg(ch, int);

	_putchar (c);
	return (1);
}
