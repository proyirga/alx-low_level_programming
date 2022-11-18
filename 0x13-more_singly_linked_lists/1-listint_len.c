#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptrh;
	size_t len = 0;

	ptrh = h;
	while (ptrh != NULL)
	{
		len += 1;
		ptrh = ptrh->next;
	}
	return (len);
}
