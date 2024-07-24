#include"main.h"
#include<stdarg.h>
/**
 * print_percent - print percentage
 *
 * @pct: percentage input
 *
 * Return: return 1 - return one character and succeed
 */
int print_percent(va_list pct)
{
	(void)pct;
	_putchar('%');
	return (1);
}
