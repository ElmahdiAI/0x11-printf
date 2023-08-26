#include "main.h"
#include <stdio.h>
/**
 * handleFormat - Handles different format specifiers and their arguments.
 * @format: The format specifier to handle.
 * @args: The list of arguments.
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void handleFormat(char format, void *args, int *size)
{
	if (format == 'c')
		_putchar((int)args, size);
	else if (format == 's')
		printStr((char *)args, size);
	else if (format == '%')
		_putchar('%', size);
	else if (format == 'd' || format == 'i')
		printInteger((int)args, size);
	else if (format == 'b')
		printBinary((unsigned int)args, size);
	else
		_putchar(format, size);
}

