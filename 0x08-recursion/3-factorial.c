#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: given number
 * Return: return factorial or -1 is n is less than 0.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
