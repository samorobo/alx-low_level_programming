#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: head of a singly linked list
 * @str: string to be stored in the list
 * Return: address of the new element which is stored in head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t numchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (numchar = 0; str[numchar]; numchar++)
		;

	new->len = numchar;
	num->next = *head;
	*head = new;

	return (*head);
}
