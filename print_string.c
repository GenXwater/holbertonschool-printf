#include "main.h"

/**
 * print_string - va_list linked function that prints a string
 *
 * @str: string type, argument inputed in the function
 * representing the string to print in va_list
 *
 * Return: returns the number of characters printed
 *
 */

int print_string(va_list str)
{
	char *s;

	s = va_arg(str, char *);

	if (s == NULL)
		s = "(null)";

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	return (s - va_arg(str, char *));
}
