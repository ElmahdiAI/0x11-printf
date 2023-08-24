#include "main.h"
#include <stdio.h>
/**
 * printInteger - Prints an integer to the standard output.
 * @args: The integer to be printed.
 * @flag: array for flags
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void printInteger(va_list args, int flag[], int *size)
{
	int number, i, temp, div = 1, digit, f_plus = 0, f_space = 0;

	number = va_arg(args, int);
	if (number < 0)
	{
		_putchar('-', size);
		number = -number;
	}
	temp = number;
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
