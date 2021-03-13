#ifndef PRINTF_H
#define PRINTF_H

int _putchar(char c);
int _printf(const char *format, ...);

/**
 */
typedef struct DataType
{
	char *specifier;
	void (*formtype)(va_list );

} dt;

#endif
