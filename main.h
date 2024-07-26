#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 *struct printer - Structure that manages format
 *specifers and corresponding functions
 *
 *@format: format specifier
 *@f: function pointer to corresponding function
 *
 */
typedef struct printer
{
	char format;
	int (*f)(va_list);
} type_t;



int _printf(const char *format, ...);
int _putchar(char c);
int print_typeformats(const char spec, va_list args);
int print_char(va_list ch);
int print_string(va_list str);
int print_integer(va_list intg);
int print_percent(va_list pct);

#endif

