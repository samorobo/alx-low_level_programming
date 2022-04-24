#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase in a string
 * @s: string
 * Return: return char
 */

char *string_toupper(char *s)
{
	int i;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
