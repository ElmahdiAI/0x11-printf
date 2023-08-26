#include "main.h"
#include <stdio.h>
/**
 * printInteger - Prints an integer to the standard output.
 * @number: The integer to be printed.
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void printInteger(int number, int *size)
{
	int temp, div = 1, digit;

	if (number < 0)
	{
		_putchar('-', size);
		number = -number;
	}
	temp = number;
	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}
	while (div >= 1)
	{
		digit = number / div;
		_putchar('0' + digit, size);
		number %= div;
		div /= 10;
	}
}

