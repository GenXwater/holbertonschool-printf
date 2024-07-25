#include"main.h"
#include<stdarg.h>
/**
 * print_integer_number - function that prints an integer
 *
 * @intg_nb: an integer or number input
 *
 *Return: return 1 if success
 */
int print_integer(va_list args)
{
	long int nb = va_arg(args, int);
	long int nbcpy = nb;
	int count = 0, div = 1;

	if (nb < 0)
	{
		_putchar('-');
		nb = -nb;
		count++;
	}
	while (nbcpy / 10 != 0)
	{
		div *= 10;
		nbcpy /= 10;
	}

	while (div != 0)
	{
		_putchar((nb / div)+ '0');
		nb %= div;
		div /= 10;
		count++;
	}
	return (count);
}

