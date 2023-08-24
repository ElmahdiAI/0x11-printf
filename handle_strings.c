#include "main.h"
#include <stdio.h>
/**
 * printChar - Prints a char to the standard output.
 * @args: The string to be printed.
 * @flag: array of flags
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void printChar(va_list args, int *flag, int *size)
{
	char c = va_arg(args, int);
	_putchar(c, size);
}
/**
 * printStr - Prints a string to the standard output.
 * @args: The string to be printed.
 * @flag: array of flags
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void printStr(va_list args, int *flag, int *size)
{
	char *store;

	store = va_arg(args, char *);
	if (store != NULL)
	{
		while (*store)
		{
			_putchar(*store, size);
			store++;
		}
	}
}
/**
 * NonPrintableChar - Prints a string with non-printable characters formatted.
 * @args: The string to be printed.
 * @flag: array of flags
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void NonPrintableChar(va_list args, int *flag, int *size)
{
	char *store;

	store = va_arg(args, char *);
	while (*store)
	{
		if (*store < 32 || *store >= 127)
		{
			_putchar('\\', size);
			_putchar('x', size);
			printHex(*store, 0, size);
		}
		else
		{
			_putchar(*store, size);
		}
		store++;
	}
}
