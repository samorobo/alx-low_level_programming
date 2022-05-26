#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 * @h: head of single list
 * @n: element to insert in the new node
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tem;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tem = *head;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tem->next != NULL)
		{
			tem = tem->next;
		}
		tem->next = new;
	}

	return (*head);
}
