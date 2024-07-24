#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

typedef struct printer
{
	char format;
	int (*f)(va_list);
} type_t;



int _printf(const char *format, ...);
int _putchar(char c);
int print_typeformats(const char spec, va_list args);

<<<<<<< HEAD
int print_char(va_list ch);
int print_string(va_list str);
int print_integer(va_list intg);
int print_percent(va_list pct);
/** int print_number(va_list nb);*/
=======
void print_char(va_list ch);
void print_string(va_list str);
void print_integer(va_list intg);// integre number %d sera avec %i
void print_percent(va_list pct);

>>>>>>> origin/dev-final

#endif

