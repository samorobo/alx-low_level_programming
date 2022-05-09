#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1, size2, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	if (n > s2)
		n = size2;
	p = malloc(size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (k = 0; k < size1; k++)
	{
		p[k] = s1[k];
	}
	for (; k < (size1 + n); k++)
	{
		p[k] = s2[k - size1];
	}
	p[k] = '\0';

	return (p);
}
