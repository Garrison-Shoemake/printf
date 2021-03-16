#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *
 *
 *
 *
 */
int p_ui(va_list args, int count)
{
	unsigned int ui = va_arg(args, unsigned int);
	unsigned int m = 1000000000, print;

       /*  if (ui < 0)
        {
                _putchar('-');
                count++;
                i = -i; 
        } */
        if (ui == 0)
        {
                _putchar('0');
                count++;
        }
        while (ui >= 1)
        {
		/* if value is greater than 10 places */
                if (ui >= m)
                {
                        print = ui / m;
                        _putchar('0' + print);
                        count++;
                        /*following function removes 1 place value at a time*/
                        ui = ui - (print * m);
                        m = m / 10;
                        while (ui < m)
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
