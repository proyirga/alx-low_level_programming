#include"search_algos.h"
/**
 * interpolation_search - Interpolation search algorithm implementation
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 * Description: assume that array will be sorted in ascending order
 * ##Return -1 if value is not present in array or if array is NULL
 * ##To determine the probe position, use : size_t pos = low +
 * ### (((double)(high - low) / (array[high] -
 * ### array[low])) * (value - array[low]))
 * ##Every time you compare a value in the array to the value you
 * ### are searching, you have to print this value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos = low +
		(((double)(high - low) /
		  (array[high] - array[low])) * (value - array[low]));

	while (low <= high && value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] > value)
			high = pos - 1;
		pos = low +
			(((double)(high - low) /
			  (array[high] - array[low])) * (value - array[low]));
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
