#include "main.h"
#include <stdio.h>
/**
 * printBinary - Prints the binary representation of an unsigned integer.
 * @number: The unsigned integer to be printed in binary.
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void printBinary(unsigned int number, int *size)
{
	if (number > 1)
	{
		printBinary(number / 2, size);
	}
	_putchar('0' + number % 2, size);
}

