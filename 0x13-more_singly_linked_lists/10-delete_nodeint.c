#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * **of a listint_t linked list.
 * @head: pointer to head node
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *del;
	unsigned int i;

	i = 0;
	temp = *head;
	if (*head == NULL)
		return (-1);
	while (i < index)
	{
		i++;
		del = temp;
		if (temp->next)
			temp = temp->next;
		else
			return (-1);
	}
	if (index == 0)
		*head = temp->next;
	else if (temp->next)
		del->next = temp->next;
	else
		del->next = NULL;
	free(temp);
	return (1);
}
