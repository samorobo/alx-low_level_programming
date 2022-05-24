#include "lists.h"

/**
 * print_list - prints all the element oof a list_t list
 * @h: single linked list
 * Return: number of elements in the list
 */

size_t print_list(const list_t *h)
{
	size_t num_display;

	for (num_display = 0; h != NULL; num_display++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (num_display);
}
