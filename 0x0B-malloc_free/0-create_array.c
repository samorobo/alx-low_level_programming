#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of char
 * @size: size of the array
 * @c: the char of the array to be filled
 * Return: return the pointer pointing to char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ch;
	ch = malloc(sizeof(c) * size)
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}
