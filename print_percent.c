#include"main.h"
#include<stdarg.h>
/**
 * print_percent - va_list linked function that prints a percentage sign
 *
 * @pct: percentage type, argument inputed in the function
 * representing the percentage to print in va_list
 *
 * (void)pct > handle compiler warning when unused variable
 *
 * Return: returns 1 if it succees
 */
int  print_percent(va_list pct)
{
	(void)pct;
	_putchar('%');
	return (1);
}
