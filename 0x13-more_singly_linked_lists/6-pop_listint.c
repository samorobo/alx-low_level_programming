#include "lists.h"

/**
 * pop_listint - deletes the head noode of a listint_t
 * @head: head of linked list
 * Return: if empty return 0 otherwise return head node's data (n)
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *p;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	num = temp->n;
	p = temp->next;

	free(temp);

	*head = p;

	return (num);
}
