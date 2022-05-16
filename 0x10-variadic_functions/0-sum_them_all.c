#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of the parameters.
 * @n: amount of all tha arguments.
 * Return: sum of all its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list valist;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}
