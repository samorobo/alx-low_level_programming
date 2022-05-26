#include "lists.h"

/**
 * listint_len - returns number of element in a linked listint_t list
 * @h: head of linked list
 * Return: returns number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
