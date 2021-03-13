#include "holberton.h"
/**
 *
 *
 */



//helper here//



int _printf(const char *format, ...)
{
	va_list input;
	int count = 0;
	unsigned int i = 0;
	unsigned int j;
	dt dtstruct[] =
	{
		{"d", printi},
		{"i", printi},
		{"s", prints},
		{"c", printc},
		{"n", printn},
		{NULL, NULL},
	}

	va_start(input, format);

	while (format && format[i])
	{
		if (format[i] == "%" || format[i] == "\\")
		{
			j = 0;
			while (dtstruct[j].specifier)
			{
				//("%c\n", 'H')
				if(dtstruct[j].specificer[0] == format[i+1])
				{
					count = dtstruct[j].formtype(input, count);
				}
			}
			j++;
		}
		_putchar(input[i]);
		count++;
		i++;
	}
	va_end(input);
	return(count);
}
