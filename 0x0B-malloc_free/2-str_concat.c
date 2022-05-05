#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a, b, c, lim;

	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] = '\0'; b++)
		;

	str = malloc(sizeof(char) * (a + b + 1))

		if (str == NULL)
		{
			free(str);
			return (NULL);
		}

	for (c = 0; c < a; c++)
		str[c] = s1[c];

	lim = b;
	for (b = 0; b <= lim; c++, b++)
		str[c] = s2[b];

	return (str);
}
