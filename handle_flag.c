#include "main.h"
#include <stdio.h>
/**
 * handle_flag - switch flags signs
 * @c: flag sign
 * Return: 1 for '+', 2 for space, and 3 for '#'
 */
int handle_flag(char c)
{
	switch (c)
	{
	case '+':
		return (1);
	case ' ':
		return (2);
	case '#':
		return (3);
	}
}
