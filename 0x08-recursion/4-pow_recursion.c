#include "main.h"

/**
 * _pow_recursion - computes x to the power of y.
 * @x: given number
 * @y: given number
 * Return: -1 if y less than 0 or x to the power of y otherwise
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
