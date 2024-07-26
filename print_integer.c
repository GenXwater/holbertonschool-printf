#include"main.h"
#include<stdarg.h>
/**
 * print_integer - va_list linked function that prints a an integer
 *
 * @intg: an integer type, argument inputed in the function
 * representing the integer to print in va_list
 *
 * Return: returns the number of characters to print
 */
int print_integer(va_list intg)
{
	int nb = va_arg(intg, int);
	int count = 0;
	int divisor = 1;

	if (nb < 0)
	{
		_putchar('-');
		nb = -nb;
		count++;
	}
	while (nb / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		_putchar((nb / divisor) % 10 + '0');
		count++;
		divisor /= 10;
	}
	return (count);
}
