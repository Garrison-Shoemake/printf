#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * p_oct - prints the octal value of a decimal / base 10 number
 * @args: argument passed to function
 * @count: integer value being returned to _printf
 * Return: int (count)
 */
int p_oct(va_list args, int count)
{
	/* unsigned int o is ui value */
	unsigned int octal = va_arg(args, unsigned int);
	/* anticipating longer output */
	int array[25];
	int loop, i = 0;

	if (octal != '\0')
	{
	while (octal != 0)
	{
	/* at array index place zero store value of first modulo */
	/* adding 48 converts to ascii -- 48 == 0 */
	/* modulo by 8 for octal values */
	array[i] = (octal % 8) + 48;
	/* continue to modulo remainder values */
	octal = octal / 8;
	i++;
	}
	/* begins @ i-1 see above, loop decrements, values printed in reverse */
	for (loop = (i - 1); loop >= 0; loop--)
	{
		_putchar(array[loop]);
		count++;
	}
	}
	return (count);
}
