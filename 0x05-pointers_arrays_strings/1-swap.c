#include "main.h"

/**
 * swap_int - swaps pointer values
 * @a: first param
 * @b: second param
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
