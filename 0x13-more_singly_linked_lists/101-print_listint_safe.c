#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head node
 *
 * Return: number of nodes in the list
 * Description:
 * **This function can print lists with a loop
 * **You should go through the list only once
 * **If the function fails, exit the program with status 98
 * **
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count;
	const listint_t *hold;

	current = head;
	if (current == NULL)
		exit(98);

	count = 0;
	while (current != NULL)
	{
		hold = current;
		current = current->next;
		count++;
		printf("[%p] %d\n", (void *)hold, hold->n);

		if (hold < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}
	return (count);
}
