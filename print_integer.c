#include"main.h"
#include<stdarg.h>
/**
 * print_integer_number - function that prints an integer
 *
 * @intg_nb: an integer or number input
 *
 */
int print_integer(va_list intg)
{
	int nb = va_arg(intg, int);

	if (nb < 0)
	{
		_putchar('-');
	}
	for (nb = '0'; nb <= '9'; nb++)
	{
		_putchar(nb);
	}
	_putchar('\n');
	return (1);
}

