#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its parameters
 * @n: number of parameters
 *
 * Return: total sum, or 0 if n is equal to 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			int x = va_arg(args, int);

			sum += x;
		}
		return (sum);
	}
}
