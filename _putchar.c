#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * @size: track number of char printed
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c, int *size)
{

	return (buffer(c, size));
}
/**
 * buffer - Save the character in a buffer
 * @c: Character to print
 * @size: track number of char printed
 * Return: 1
 **/
int buffer(char c, int *size)
{
	static char buff_loc[BUFFER_SIZE];
	static int i;

	if (c == -1 || i == BUFFER_SIZE)
	{
		write(1, buff_loc, i);
		(*size) += i;
		i = 0;
	}
	if (c != -1)
	{
		buff_loc[i] = c;
		i++;
	}
	return (1);
}
