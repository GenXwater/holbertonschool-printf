#include "main.h"

/**
 *
 *
 */

int print_char(va_list ch)
{
	int c = va_arg(ch, int);
	_putchar (c);
	return (1);
}
