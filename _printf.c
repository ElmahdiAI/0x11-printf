#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf: a function that produces output according to a format.
 * @format:  is a character string. The format string is composed of
 * zero or more directives.
 * Returns: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i = 0, size = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			handleFormat(format[i], args, &size);
		}
		else
			_putchar(format[i], &size);
		i++;
	}
	_putchar(-1, &size);
	return (size);
}
