#include"main.h"
#include<stdarg.h>
/**
 * print_integer_number - function that prints an integer
 *
 * @intg_nb: an integer or number input
 *
 * Return: return 1 if success
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
	}
	
	while (nb / divisor >= 10)
	{
		divisor *= 10;
		/** pour nb = 123
		 * 123 is > 10, so :
		 * divisor est multiplier par 10 du coup
		 * 10 * 1, divisor devient 10
		 * 12 de 123, est sup à 10 :
		 * divisor devient alors 100
		 * nb / divisor est maintenant 1 car divisor est 100
		 * 1 < 10, la boucle se termine
		 */
	}

	while (divisor > 0)
	{
		_putchar((nb / divisor) % 10 + '0');
		count++;
		divisor /= 10; 
	}		

	return (count);
}
