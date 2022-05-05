#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates and points to a newly allocated spaces in a memory
 * @str: string to be duplicated
 * Return: pointer of the newly duplicated string
 */

char *_strdup(char *str)
{
	unsigned int k, l;
	char dup;
	if (str == NULL)
		return (NULL);
	for (k = 0; str[k] != '\0'; k++)
		;
	dup = (char *)malloc(sizeof(char) * k + 1);
	if (dup == NULL)
		return (NULL);
	for (l = 0; l <= k; l++)
		dup[l] = str[l];
	return (dup);
}
