#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: given num to be set
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
