#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 * **a listint_t linked list.
 * @head: head node
 *
 * Return: sum of all the data (n) of a listint_t linked list,
 * **or 0 is the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
