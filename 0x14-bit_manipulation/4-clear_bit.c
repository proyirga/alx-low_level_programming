#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: given num for a bit to be cleared from
 * @index: the index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if worked, or -1 if an error occured.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 64)
		return (-1);
	hold = index;
	for (i = 1; hold > 0; i *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
