#include "main.h"
#include <stdio.h>
/**
 * handleFormat - Handles different format specifiers and their arguments.
 * @format: The format specifier to handle.
 * @args: The list of arguments.
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void handleFormat(char format, va_list args, int *size)
{
	int number;
	unsigned int unumber;
	char *store;

	switch (format)
	{
	case 'c':
		_putchar(va_arg(args, int), size);
		break;
	case 's':
		store = va_arg(args, char *);
		printStr(store, size);
		break;
	case '%':
		_putchar('%', size);
		break;
	case 'd':
	case 'i':
		number = va_arg(args, int);
		printInteger(number, size);
		break;
	case 'b':
		unumber = va_arg(args, unsigned int);
		printBinary(unumber, size);
		break;
	case 'u':
		unumber = va_arg(args, unsigned int);
		printUnsigned(unumber, size);
		break;
	case 'o':
		unumber = va_arg(args, unsigned int);
		printOctal(unumber, size);
		break;
	case 'x':
		unumber = va_arg(args, unsigned int);
		printHex(unumber, 1, size);
		break;
	case 'X':
		unumber = va_arg(args, unsigned int);
		printHex(unumber, 0, size);
		break;
	case 'S':
		store = va_arg(args, char *);
		NonPrintableChar(store, size);
		break;
	case 'p':
		unumber = (unsigned int)va_arg(args, void *);
		printPointer(unumber, size);
		break;
	}
}
