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
	int count = 0, f_index = 0, s_index;
	va_list args;
	dt specs[] = {
		{'d', printdi}, {'i', printdi}, {'s', prints}, {'c', printc}, {'b', printb},
		{'o', p_oct}, {'u', p_ui}, {'x', p_hex}, {'X', p_heX},
		{'%', printpercent}, {'\0', NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format != NULL && format[f_index] != '\0')
	{
		if (format[f_index] == '%' && format[f_index + 1])
		{
			for (s_index = 0; specs[s_index].specifier != '\0'; s_index++)
			{
				if (specs[s_index].specifier == format[f_index + 1])
				{
					count = specs[s_index].formtype(args, count);
					f_index++;
					break;
				}
				else if (specs[s_index].specifier == '%')
				{
					_putchar(format[f_index]);
					_putchar(format[f_index + 1]);
					count++, f_index++;
				}
			}
		}
		else
		{
		_putchar(format[f_index]);
		count++;
		}
		f_index++;
	}
	va_end(args);
	return (count);
}
