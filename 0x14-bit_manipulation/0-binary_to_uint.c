#include "main.h"

/**
 * binary_to_unit - converts binary to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */

unsigned int binary_to_unit(const char *b)
{
	int k;
	unsigned int conv = 0;

	if (b == NULL)
		return (0);

	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		conv = 2 * conv + (b[k] - '0');
	}

	return (conv);
}
