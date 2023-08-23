#include "main.h"
#include <stdio.h>
/**
 * printPointer - Prints a pointer in hexadecimal format.
 * @unumber: The pointer value to be printed.
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void printPointer(unsigned int unumber, int *size)
{
	_putchar('0', size);
	_putchar('x', size);
	printHex(unumber, 0, size);
}
