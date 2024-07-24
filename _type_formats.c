#include "main.h"
/**
 * print_typeformats - function that find the format specifier
 * of a given type format
 * it compares the given format specifier with a list of format type
 * and if it matches, it calls the corresponding function through
 * the variadic arguments.
 *
 * @spec: format specifier
 * @args: argument of the variadic function
 *
 * Return : return 0 if specifier corresponding function is called successfully
 * or return 1 if no specifier function matches
 */
int print_typeformats(const char spec, va_list args)
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

	while (type_spec[i].format)
	{
		if (type_spec[i].format == spec)
		{
			type_spec[i].f(args);
			return (0);
		}
		i++;
	}
	return (1);
}
