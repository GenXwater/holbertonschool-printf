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
	int x;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			x = count;
			count += print_typeformats(*format, args);
			if (x == count)
			{
				_putchar('%');
				count += _putchar(*format);
			}
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
