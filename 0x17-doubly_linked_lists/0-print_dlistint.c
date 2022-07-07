#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - prints the elements of a list
 * @h: head of the list
 * Return: return number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr;

	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
		count++;
	}
	return (count);
}
