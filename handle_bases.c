#include "main.h"
#include <stdio.h>
/**
 * printUnsigned - Prints an unsigned integer to the standard output.
 * @number: The unsigned integer to be printed.
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing
 */
void printUnsigned(unsigned int number, int *size)
{
	if (number > 9)
	{
		printUnsigned(number / 10, size);
	}
	_putchar('0' + number % 10, size);
}
/**
 * printOctal - Prints an unsigned integer in octal format.
 * @number: The unsigned integer to be printed in octal.
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void printOctal(unsigned int number, int *size)
{
	if (number > 7)
	{
		printOctal(number / 8, size);
	}
	_putchar('0' + number % 8, size);
}
/**
 * printHex - Prints an unsigned integer in hexadecimal format.
 * @number: The unsigned integer to be printed in hexadecimal.
 * @n: A flag indicating whether to print uppercase (n = 0)
 * or lowercase (n = 1) letters.
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void printHex(unsigned int number, int n, int *size)
{
	if (number > 15)
	{
		printHex(number / 16, n, size);
	}
	hexChar(number % 16, n, size);
}
/**
 * hexChar - Prints a hexadecimal character based on the input value.
 * @hex: The hexadecimal value (0 to 15) to be printed as a character.
 * @n: A flag indicating whether to print uppercase (n = 0)
 * or lowercase (n = 1) letters.
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void hexChar(unsigned int hex, int n, int *size)
{
	switch (hex)
	{
	case 10:
		if (n == 0)
			_putchar('A', size);
		else
			_putchar('a', size);
		break;
	case 11:
		if (n == 0)
			_putchar('B', size);
		else
			_putchar('b', size);
		break;
	case 12:
		if (n == 0)
			_putchar('C', size);
		else
			_putchar('c', size);
		break;
	case 13:
		if (n == 0)
			_putchar('D', size);
		else
			_putchar('d', size);
		break;
	case 14:
		if (n == 0)
			_putchar('E', size);
		else
			_putchar('e', size);
		break;
	case 15:
		if (n == 0)
			_putchar('F', size);
		else
			_putchar('f', size);
		break;
	default:
		_putchar('0' + hex, size);
	}
}
