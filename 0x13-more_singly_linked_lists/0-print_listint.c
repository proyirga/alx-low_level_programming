#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head/first node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptrh;
	size_t counter = 0;

	ptrh = h;
	while (ptrh != NULL)
	{
		printf("%d\n", ptrh->n);
		counter += 1;
		ptrh = ptrh->next;
	}
	return (counter);
}
