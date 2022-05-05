#include "main.h"
#include <stdio.h>

/**
 * alloc_grid - returns pointer to a two dimensional array of integers
 * @width: width of the array
 * @height: height of array
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	char **gridout;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(sizeof(int) * height)
		if (gridout == NULL)
		{
			free(gridout);
			return (NULL);
		}
	for (i = 0; i < height; i++)
	{
		gridout[i] = malloc(sizeof(int) * width)
			if (gridout[i] == NULL)
			{
				for (i--; i >= 0; i--)
					free(gridout[i]);
				free(gridout);
				return (NULL);
			}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridout[i][j] = 0;

	return (gridout);
}
