#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head
 * @n: index where a new node placed in
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	*head = new;
	if (temp == NULL)
		new->next = NULL;
	else
		new->next = temp;
	return (new);
}
