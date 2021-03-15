#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct datatype - checks format specifiers, assigns appropriate function
 * @specifier: character given via input, indicates data type to be printed
 * @formtype: function based on @specifier
 */
typedef struct datatype
{
	char specifier;
	int (*formtype)(va_list input, int count);

} dt;

int _putchar(char c);
int _printf(const char *format, ...);
int printdi(va_list input, int count);
int printc(va_list input, int count);
int prints(va_list input, int count);
int printpercent(va_list input, int count);
int printb(va_list input, int count);
#endif
