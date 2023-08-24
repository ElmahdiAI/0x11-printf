#include "main.h"
#include <stdio.h>
/**
 * printPointer - Prints a pointer in hexadecimal format.
 * @args: The pointer value to be printed.
 * @flag: for flags
 * @size: Pointer to track the number of characters printed.
 * Return: Nothing.
 */
void printPointer(va_list args, int *flag, int *size)
{
	void *ptr;
	unsigned long int ptrValue;

	ptr = va_arg(args, void *);
	ptrValue = (unsigned long int)ptr;
	_putchar('0', size);
	_putchar('x', size);
	printHex(ptrValue, 1, size);
}
