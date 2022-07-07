#include "main.h"

/**
 * more_numbers - prints 10 times numbers 0 to 14
 * Return: no return value
 */

void more_numbers(void)
{
	int i = 48;
	int l = 0;
	int reset = 0;

	while (l < 10)
	{
		while (i <= 62)
		{
			if (i > 57)
			{
				reset = 10;
				_putchar(49);
			}
			_putchar(i - reset);
			i++;
		}
		i = 48;
		reset = 0;
		l++;
		_putchar(10);
	}
}
