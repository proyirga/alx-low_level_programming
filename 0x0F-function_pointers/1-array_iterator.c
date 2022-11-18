#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * ** on each element of an array.
 * @array: given array
 * @size: size of an array
 * @action: is a pointer to the function you need to use
 *
 * Return: none
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
