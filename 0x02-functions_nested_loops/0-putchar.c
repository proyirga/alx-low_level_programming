#include "main.h"
/**
 * main - Entry point
 * Return: (0)
 *
 * Description: Program that prints _putchar, followed by a new line.
 *
 */

int main(void)
{
	char *c;
	int i;

	c = "_putchar";
	i = 0;

	while (i < 8)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

