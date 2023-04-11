#include"search_algos.h"
/**
 * linear_search - linear algorithm search
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located
 *
 * Description: If value is not present in array or if array is NULL,
 * ##the function must return -1
 * ##Every time you compare a value in the array to the value
 * ##you are searching, you have to print this value
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d] \n\n", i, array[i]);
			if (value == array[i])
				return (i);
			}
	}
	return (-1);
}
