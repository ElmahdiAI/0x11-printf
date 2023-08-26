#include "main.h"
#include <stdio.h>
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
 * @size: Pointer to track the number of characters printed.
 * @isLower: flag indicating whether to print uppercase or lowercase letters.
 * Return: Nothing.
 */
void hexChar(unsigned int hex, int isLower, int *size)
{
	char hexCharsU[] = "0123456789ABCDEF";
	char hexCharsL[] = "0123456789abcdef";

	if (isLower == 0)
		_putchar(hexCharsU[hex], size);
	else
		_putchar(hexCharsL[hex], size);
}
