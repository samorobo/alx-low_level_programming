#include "main.h"

/**
 * _memset - fill the memory of a constant bytes
 * @s: the memory to be filled
 * @b: constant bytes
 * @n: bytes of the memory
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
