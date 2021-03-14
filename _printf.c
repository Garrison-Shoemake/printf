#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *
 *
 */

int _printf(const char *format, ...)
{
	int count = 0;
	int j, i = 0;
	va_list input; 
	dt specs[] = {
		/*{'d', printdi},*/
		/*{'i', printdi},*/
		{'s', prints},
		{'c', printc},
	/*	{'n', printn}, */
		{'\0', NULL}
	};

	va_start(input, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (specs[j].specifier != '\0')
			{
				if(specs[j].specifier == format[i+1])
				{
					count = specs[j].formtype(input, count);
					i++;
				}
			j++;
			}
			
		}
		else
		{
		_putchar(format[i]);
		count++;
		}
		i++;
	}
	va_end(input);
	return(count);
}
