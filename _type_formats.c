#include "main.h"
/**
 * print_typeformats - function that find the format specifier
 * of a given type format
 * it compares the given format specifier with a list of format type
 * and if it matches, it calls the corresponding function through
 * the variadic arguments.
 *
 * @spec: format specifier
 *
 * Return: Return 1 if specifier corresponding function is called successfully
 * or return 0 if no specifier function matches
 */
int (*print_typeformats(char spec))(va_list)
{
	type_t type_spec[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}
	};

	int i = 0;

	while (type_spec[i].format != '\0')
	{
		if (spec == type_spec[i].format)
		{
			return (type_spec[i].f);
		}
		i++;
	}

	_putchar('%');
	_putchar(spec);

	return (0);
}
