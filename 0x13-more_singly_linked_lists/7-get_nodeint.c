#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: head node
 * @index: an index where a node is found at
 *
 * Return: an index at which a node of found, otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	temp = head;
	count = 0;
	while (count < index)
	{
		if (temp)
			temp = temp->next;
		else
			return (NULL);
		count++;
	}
	if (temp)
		return (temp);
	else
		return (NULL);
}
