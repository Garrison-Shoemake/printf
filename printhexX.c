#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * p_heX - takes unsigned int and converts to hex
 * @args: argument passed
 * @count: integer value of chars printed
 * Return: int (count)
 */
int p_heX(va_list args, int count)
{
	unsigned int hex = va_arg(args, unsigned int);
	int  i = 0, rem;
	char ascii[25];

	while (hex != 0)
	{
		rem = hex % 16;
		if (rem < 10)
			rem = rem + 48;
		else
			rem = rem + 55;

		ascii[i] = rem;
		i++;
		hex = hex/16;
	}
	
	for ( i = (i - 1); i >= 0; i--)
	{
		_putchar(ascii[i]);
		count++;
	}
			
	return (count);		
}
