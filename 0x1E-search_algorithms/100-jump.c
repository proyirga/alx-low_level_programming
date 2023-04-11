#include"search_algos.h"
#include<math.h>
/**
 * jump_search - Jump search algorithm implementation
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 *
 * Description: assume that array will be sorted in ascending order
 * ###If value is not present in array or if array is NULL, return -1
 * ###Use the square root of the size of the array as the jump step.
 * ####and the sqrt() function included in <math.h>
 * ###Every time you compare a value in the array to the value you are
 * ####searching for, you have to print this value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = sqrt(size);
	size_t i = 0;
	size_t bl = 0;

	if (size > 0)
	{
		while (array[i] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i += jump_step;
		}
		bl = i - jump_step;
		printf("Value found between indexes [%ld] and [%ld]\n", bl, i);
		while (bl <= i && i <= size)
		{
			printf("Value checked array[%ld] = [%d]\n", bl, array[bl]);
			if (value == array[bl])
				return (bl);
			bl++;
		}
	}
	return (-1);
}

