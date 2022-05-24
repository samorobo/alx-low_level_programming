#include "lists.h"

/**
 * list_len - returns the number of element in a list
 * @h: singly linked list
 * Return: number of element in the list
 */

size_t list_len(const list_t *h)
{
	size_t num_display;

	num_display = 0;
	while (h != NULL)
	{
		h = h->next;
		num_display++;
	}
	return (num_display);
}
