#include "main.h"

/**
 * print_diagonal - print diagonal shape to stdout
 * @n: size of diagonal
 * Return: no return value
 */

void print_diagonal(int n)
{
	int j = 0;
	int i;

	if (n > 0)
	{
		while (j < n)
		{
			for (i = 0; i < j; i++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
			j++;
		}
	}
	else
		_putchar('\n');
}
