#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - variadic function analyzes and prints arguments to stdout
 * @format: given input to be analyzed by _printf
 * Return: int (count)
 */

int _printf(const char *format, ...)
{
	int count = 0, i = 0, j;
	va_list input;
	dt specs[] = {
		{'d', printdi}, {'i', printdi}, {'s', prints}, {'c', printc}, {'b', printb},
		{'%', printpercent}, {'\0', NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(input, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (specs[j].specifier != '\0')
			{
				if (specs[j].specifier == format[i + 1])
				{
					count = specs[j].formtype(input, count);
					i++;
					break;
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
	printf("%d\n", count);
	return (count);
}
