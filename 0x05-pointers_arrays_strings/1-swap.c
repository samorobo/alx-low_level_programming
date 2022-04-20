#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: integer to swap
 * @b: integer t swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int s;

	int s = *a;
	*a = *b;
	*b = s;
}
