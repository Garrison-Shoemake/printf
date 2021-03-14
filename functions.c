#include "holberton.h"
/**
 *
 *
 */
void printd()
{

}
/**
*/
void printi()
{

}
/**
 */
void printc()
{

}
/**
 */
int prints(va_list input, int count)
{
	char *c = va_arg(input, char *);
	while (c != NULL)
	{
		_putchar(c[i]);
		count++;
		i++;
	}
	return (count);
}


//"%c/n"
