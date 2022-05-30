#include "main.h"

/**
 * flip_bits - functin that returns the number of bits you woould need to flip
 * to get from one number to another
 * @n: number
 * @m: long int
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned int m)
{
	unsigned long innt swap = n ^ m;
	int counter = 0;

	while (swap)
	{
		swap swap & (swap - 1);
		counter++;
	}

	return (counter);
}
