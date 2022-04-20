#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: input string
 * Return: length of string
 */

int _strlen(char *s)
{
	int c = 0;
	while (*(s + c) != '\0')
	{
		c++;
	}
	return (c);
}
