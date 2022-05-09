#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size to be allocated
 * Return: returns pointer to the allocated memory.
 * if malloc fails,status value is equal to 98
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
