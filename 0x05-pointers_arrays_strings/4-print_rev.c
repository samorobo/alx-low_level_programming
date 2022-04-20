#include "main.h"

/**
 * print_rev - printing a string in reverse followed by a new line
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int l = 0, z;

	while (s[z++])
	{
		l++;
	}
	for (z = l - 1; z >= 0; z--)
	{
		_putchar(s[z]);
	}
	_putchar('\n');
}
