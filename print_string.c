#include "main.h"

/**
 *
 *
 */

void print_string(va_list str)
{
	char *s;

	s = va_arg(str, char*);

	while (*s != '\0')
	{
		_putchar(s);
		s++;
	}
	return (s);
}
