#include "main.h"

/**
 * _printf - Printf main function using variadic
 * that prints a user defined variable.
 *
 * @format: format string
 * @...: arguments that have to be printed, suspension
 * points stand for variadic use.
 *
 * Return: returns the number of characters printed, or NULL if error
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
