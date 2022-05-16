#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: No return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_args(valist, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
