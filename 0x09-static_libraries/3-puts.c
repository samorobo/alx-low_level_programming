#include "main.h"

/**
 * _puts - printing a string followed by a new line
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{

	int f;

	for (f = 0; str[f]; f++)
	{
		_putchar(str[f]);
	}
	_putchar('\n');
}
