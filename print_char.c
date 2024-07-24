#include "main.h"

/**
 *
 *
 */

int print_char(va_list ch)
{
	int c = va_arg(list, ch);
	_putchar(c);
	return (1);
}
