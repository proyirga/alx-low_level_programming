#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head node
 * @idx: the index of the list where the new node should be added
 * @n: value of the new node to be added
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	temp = *head;
	count = 1;
	while (temp && count < idx)
	{
		count++;
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		*head = new;
		new->next = temp;
	}
	else if (temp->next)
	{
		new->next = temp->next;
		temp->next = new;
	}
	else
	{
		new->next = NULL;
		temp->next = new;
	}
	return (new);
}
