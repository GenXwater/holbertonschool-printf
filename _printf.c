#include "main.h"

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
	
	if (format == NULL)
                return (-1);

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

	va_end(args);

	return (count);
}
