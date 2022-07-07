#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - returns number of element list
 * @h: head off the linked list
 * Return: returns the number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr;

	for (ptr = h; ptr != NULL; ptr = ptr->next)
	{
		count++;
	}
	return (count);
}
