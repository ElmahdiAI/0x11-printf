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
	int i = 0, j, flag[] = {0, 0, 0}, size = 0;
	va_list args;
	ConversionHandler handlers[] = {
		{'c', printChar}, {'s', printStr}, {'%', printChar}, {'d', printInteger}, {'i', printInteger}, {'b', printBinary}, {'u', printUnsigned}, {'o', printOctal}, {'x', printHexLower}, {'X', printHexUpper}, {'S', NonPrintableChar}, {'p', printPointer}};
	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] == '+' || format[i] == ' ' || format[i] == '#')
			{
				flag[j] = handle_flag(format[i]);
				j++;
				i++;
			}
			for (int j = 0; j < sizeof(handlers) / sizeof(handlers[0]); j++)
			{
				if (format[i] == handlers[j].specifier)
				{
					handlers[j].handler(args, flag, &size);
					break;
				}
			}
		}
		else
			_putchar(format[i], &size);
		i++;
	}
	va_end(args);
	_putchar(-1, &size);
	return (size);
}
