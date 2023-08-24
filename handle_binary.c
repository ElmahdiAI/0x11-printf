#include "main.h"
#include <stdio.h>
/**
 * printBinary - Prints the binary representation of an unsigned integer.
 * @args: The unsigned integer to be printed in binary.
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void printBinary(va_list args, int *flag, int *size)
{
	unsigned int unumber;

	unumber = va_arg(args, unsigned int);
	if (unumber > 1)
	{
		printBinary(unumber / 2, flag, size);
	}
	_putchar('0' + unumber % 2, size);
}
