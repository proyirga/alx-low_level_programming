#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minumum integer value
 * @max: maximum integer value
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr_narr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr_narr = malloc(sizeof(int) * size);
	if (ptr_narr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr_narr[i] = min++;
	return (ptr_narr);
}
