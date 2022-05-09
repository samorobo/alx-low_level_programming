#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: integer value
 */

int *array_range(int min, int max)
{
	int *ar;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ar = malloc(((max - min) + 1) * sizeof(*ar));

	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		ar[i] = min;
	}

	return (ar);
}
