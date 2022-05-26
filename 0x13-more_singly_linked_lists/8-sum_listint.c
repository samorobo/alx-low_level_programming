#include "lists.h"

/**
 * sum_listint - returns sum oof all data (n) listint_t link
 * @head: head of single linked list
 * Return: if list is empty return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
