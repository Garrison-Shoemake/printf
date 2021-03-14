#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *
 *
 */
/*int printn(va_list input, int count)
{
	(void)input;

	_putchar(10);
	count++;

	return (count);
}*/
/**
*/
/*int printdi(va_list input, int count)
{
	while (x != NULL)
	{
		_putchar(x);
		count++;
	}
	return (count);
}
 */
int printc(va_list input, int count)
{
	char x = (char)va_arg(input, int);
	
	_putchar(x);
	count++;

	return (count);
}
/**
 */
int prints(va_list input, int count)
{
	int i = 0;

	char *c = va_arg(input, char *);
	while (c != NULL)
	{
		_putchar(c[i]);
		count++;
		i++;
	}
	return (count);
}
