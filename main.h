#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>


typedef struct printer
{
	char format;
	void (*f)(va_list);
}



int _printf(const char *format, ...);
int _putchar(char c);
//int char_formats(const char *format, va_list args);

int _char(va_list ch);
int _string(va_list str);
int _integer(va_list intg);// integre number %d sera avec %i
int _percent(va_list pct);


#endif

