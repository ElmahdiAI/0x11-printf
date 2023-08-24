#include "main.h"
#include <stdio.h>
/**
 * printUnsigned - Prints an unsigned integer to the standard output.
 * @args: The unsigned integer to be printed.
 * @flag: flags to add
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing
 */
void printUnsigned(va_list args, int *flag, int *size)
{
	unsigned int unumber, i, f_plus = 0, f_space = 0;

	for (i = 0; flag[i] < 2; i++)
	{
		if (flag[i] == 1)
			f_plus = 1;
		else if (flag[i] == 2)
			f_space = 1;
	}
	if (f_plus)
		_putchar('+', size);
	else if (f_space)
		_putchar(' ', size);
	printUnsigned(unumber, flag, size);
	if (unumber > 9)
	{
		printUnsigned(unumber / 10, flag, size);
	}
	_putchar('0' + unumber % 10, size);
}
/**
 * printOctal - Prints an unsigned integer in octal format.
 * @args: The unsigned integer to be printed in octal.
 * @flag: flags to add
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void printOctal(va_list args, int *flag, int *size)
{
	unsigned int unumber, i, f_hash = 0;

	for (i = 0; flag[i] < 2; i++)
	{
		if (flag[i] == 3)
			f_hash = 1;
	}
	if (f_hash)
		_putchar('0', size);
	unumber = va_arg(args, unsigned int);
	if (unumber > 7)
	{
		printOctal(unumber / 8, flag, size);
	}
	_putchar('0' + unumber % 8, size);
}
/**
 * printHexUpper - Prints an unsigned integer in hexadecimal format.
 * @args: The unsigned integer to be printed in hexadecimal.
 * @flag: flags to add
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void printHexUpper(va_list args, int *flag, int *size)
{
	unsigned int unumber, i, f_hash = 0;

	for (i = 0; flag[i] < 2; i++)
	{
		if (flag[i] == 3)
			f_hash = 1;
	}
	if (f_hash)
	{
		_putchar('0', size);
		_putchar('X', size);
	}
	unumber = va_arg(args, unsigned int);
	if (unumber > 15)
	{
		printHex(unumber / 16, size);
	}
	hexChar(unumber % 16, size, 0);
}
/**
 * printHexUpper - Prints an unsigned integer in hexadecimal format.
 * @args: The unsigned integer to be printed in hexadecimal.
 * @flag: flags to add
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void printHexLower(va_list args, int *flag, int *size)
{
	unsigned int unumber, i, f_hash = 0;

	for (i = 0; flag[i] < 2; i++)
	{
		if (flag[i] == 3)
			f_hash = 1;
	}
	if (f_hash)
	{
		_putchar('0', size);
		_putchar('x', size);
	}
	unumber = va_arg(args, unsigned int);
	if (unumber > 15)
	{
		printHex(unumber / 16, size);
	}
	hexChar(unumber % 16, size, 1);
}
/**
 * hexChar - Prints a hexadecimal character based on the input value.
 * @hex: The hexadecimal value (0 to 15) to be printed as a character.
 * @size: Pointer to track the number of characters printed.
 * @isLower: flag indicating whether to print uppercase or lowercase letters.
 * Return: Nothing.
 */
void hexChar(unsigned int hex, int *size, int isLower)
{
	char hexCharsU[] = "0123456789ABCDEF";
	char hexCharsL[] = "0123456789abcdef";

	if (isLower == 0)
		_putchar(hexCharsU[hex], size);
	else
		_putchar(hexCharsL[hex], size);
}
