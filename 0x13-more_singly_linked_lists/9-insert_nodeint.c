#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: head of the singly linked list
 * @idx: index poositioon for insertion
 * @n: data to insert in the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (j = 0; temp && j < idx; j++)
	{
		if (i = idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL):
}
