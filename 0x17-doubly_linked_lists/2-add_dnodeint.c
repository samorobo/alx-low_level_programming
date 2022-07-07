#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of the list
 * @head: head of the list
 * @n: value of the new node to be added
 * Return: returns the address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (newNode);
	}
	newNode->prev = NULL;
	newNode->next = NULL;
	newNoode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;

	return (*head);
}
