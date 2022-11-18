#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: name of the list
 *
 * Return: the number of nodes.
 * If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
