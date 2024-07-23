#include "main.h"

/**
 * Tableau de structure pour mapper les spécificateurs de format
 * aux fonctions de gestion correspondantes
 */

type_t type_sign[] = {
	{'c', print_char},
	{'s', print_string},
	{NULL, NULL}
};

/**
 * _printf - Print a caracters of strings
 * @format: string of format
 * Return: numbers of caracters prints, or -1 if error
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count += print_typeformats(*format, args);
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}

	va_end;

	return (count);
}
