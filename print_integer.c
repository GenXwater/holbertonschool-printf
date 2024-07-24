#include"main.h"
#include<stdarg.h>
/**
 * print_integer - function that prints an integer
 *
 * @intg: an integer input
 *
 */
void print_integer(va_list intg)
{
	int nb = va_arg(intg, int);

	if (nb < 0)
	{
		_putchar('-');
	}
	for (nb = '0', nb <= '9'; nb++)
	{
		_putchar(nb);
	}
	_putchar('\n');
}

