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

