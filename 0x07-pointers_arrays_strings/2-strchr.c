#include "main.h"

/**
 * _strchr - locates the first occurence of a character in a string
 * @s: string
 * @c: character to be located
 * Return: pointer returned to the first occurence c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)

		if (s[i] == c)
			return (s);
		else 
			return ('\0');
}
