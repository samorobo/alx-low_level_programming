#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination to be copied into
 * @src: memory source
 * @n: bytes in the memory
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
