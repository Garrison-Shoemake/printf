#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
/**
 * printdi - prints base ten number / integer
 * @args: arguments passed to printf function
 * @count: integer that increments with every character printed to stdout
 * Return: int (count)
 */
int printdi(va_list args, int count)
{
	int i = va_arg(args, int), m = 1000000000, print;

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
				m = m / 10;
				count++;
			}
		}
		else
			m = m / 10;
	}
	return (count);
}
/**
 * printc - printcs single character
 * @args: arguments passed to printf function
 * @count: integer that increments with every character printed to stdout
 * Return: int (count)
 */
int printc(va_list args, int count)
{
	char x = (char)va_arg(args, int);

	if (x != '\0')
	{
	_putchar(x);
	count++;
	}
	if (x == '\0')
	{
		_putchar(0);
	}

	return (count);
}
/**
 * prints - prints string of characters
 * @args: arguments passed to printf function
 * @count: integer that increments with every character printed to stdout
 * Return: int (count)
 */
int prints(va_list args, int count)
{
	int i = 0;
	char *c = va_arg(args, char *);

	if (c != '\0')
	{
		while (c[i] != '\0')
		{
			_putchar(c[i]);
			count++;
			i++;
		}
	}
	else if (c == '\0')
	{
		_putchar(40);
		_putchar(110);
		_putchar(117);
		_putchar(108);
		_putchar(108);
		_putchar(41);
		count++;
	}
	return (count);
}
/**
 * printpercent - prints '%'
 * @args: arguments passed to printf function
 * @count: integer that increments with every character printed to stdout
 * Return: int (count)
 */
int printpercent(va_list args __attribute__((unused)), int count)
{
	_putchar('%');
	count++;
	return (count);
}
/**
 * printb - takes unsigned int argument, and converts it to binary
 * @args: arguments passed to printf function
 * @count: integer that increments with every character printed to stdout
 * Return: int (count)
*/
int printb(va_list args, int count)
{
	/* unsigned int b is ui value */
	unsigned int b = va_arg(args, unsigned int);
	/* anticipating longer ouptup creating buffer ?? malloc?? */
	int array[25];
	int loop, i = 0;

	if (b != '\0')
	{
	while (b != 0)
	{
	/* at array index place zero store value of first modulo */
	/* adding 48 converts to ascii -- 48 == 0 */
	array[i] = (b % 2) + 48;
	/* continue to modulo remainder values */
	b = b / 2;
	i++;
	}

	for (loop = (i - 1); loop >= 0; loop--)
	{
		_putchar(array[loop]);
		count++;
	}
	}

	return (count);
}
