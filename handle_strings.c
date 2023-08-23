#include "main.h"
#include <stdio.h>
/**
 * printStr - Prints a string to the standard output.
 * @str: The string to be printed.
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void printStr(char *str, int *size)
{
	if (str != NULL)
	{
		while (*str)
		{
			_putchar(*str, size);
			str++;
		}
	}
}
/**
 * NonPrintableChar - Prints a string with non-printable characters formatted.
 * @str: The string to be printed.
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void NonPrintableChar(char *str, int *size)
{
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			_putchar('\\', size);
			_putchar('x', size);
			printHex(*str, 0, size);
		}
		else
		{
			_putchar(*str, size);
		}
		str++;
	}
}
