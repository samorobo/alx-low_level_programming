#include "main.h"

/**
 * print_rev - printing a string in reverse followed by a new line
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	
	}
	for (l = l - 1; l >= 0; l++)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
