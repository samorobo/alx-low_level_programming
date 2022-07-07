#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_dnodeint_end - adds node at the end of the list
 * @head: head of the doubly linked list
 * @n: value of the newnode to be added
 * Return: the address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *ptr;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode != NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = newNode;
	newNode->prev = ptr;

	return (newNode);
}
