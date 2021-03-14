#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *
 *
 */
int printdi(va_list input, int count)
{
	int i = va_arg(input, int);
	int m = 1000000000;
	int print;
	if (i < 0)
	{
		_putchar('-');
		count++;
		i = -i;
	}
	if (i == 0)
	{
		_putchar('0');
		count++;
	}
	while (i >= 1)
	{
		if (i >= m)
		{
			print = i / m;
			_putchar('0' + print);
			count++;
			/*following function removes 1 place value at a time*/
			i = i - (print * m);
			m = m / 10;
			while (i < m)
			{
				/* this loop accounts for 0 values*/
				_putchar('0' + 0);
				m = m /10;
				count++;
			}
		}
		else
		{
			/* divides max until if statement is true*/
			m = m / 10;
		}
	}
	return (count);
}
/**
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
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		count++;
		i++;
	}
	return (count);
}
int printpercent(va_list input __attribute__((unused)), int count)
{
	_putchar('%');
	count++;
	return (count);
}
