#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int a, last;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	last = (a + 1) / 2;

	for (a = last; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
