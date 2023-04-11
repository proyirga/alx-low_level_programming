#include"search_algos.h"
/**
 * binary_search - implementation of binary search algos
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 *
 * Description: assume that array will be sorted in ascending order
 * ##assume that value won’t appear more than once in array
 * ##If value is not present in array or if array is NULL,
 * ###your function must return -1
 * ##You must print the array being searched every time it changes.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low_index = 0;
	size_t high_index = size - 1;
	size_t mid_index = (low_index + high_index) / 2;

	if (size > 0)
	{
		while (low_index <= high_index)
		{
			printf("Searching in array: ");
			print_array(array, low_index, high_index);
			printf("\n");

			if (value == array[mid_index])
				return (mid_index);
			else if (value > array[mid_index])
			{
				low_index = mid_index + 1;
				mid_index = (low_index + high_index) / 2;
			}
			else
			{
				high_index = mid_index - 1;
				mid_index = (low_index + high_index) / 2;
			}
		}
	}
	return (-1);
}
/**
 * print_array - print array within ranges of arguments
 * @array: given array
 * @low_index: starting point of printing
 * @high_index: ending point of printing
 * Return: ALWAYS SUCCESS(0)
 */
void print_array(int *array, size_t low_index, size_t high_index)
{
	size_t i;

	for (i = low_index; i <= high_index; i++)
	{
		printf("%d", array[i]);
		if (i != high_index)
			printf(", ");
	}
}
