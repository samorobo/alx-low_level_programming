#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of single linked list
 * @index: index position of the node to return
 * Return: if node doesn't exist return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int count = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		if (count == index)
			temp = temp->next;
		count++;
	}
	return (temp ? temp : NULL);
}
