#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet, in
 * +lowercase, followed by a new line.
 *
 * Requirements:
 *	Prototype: void print_alphabet_x10(void);
 *	Only use _putchar twice in your code
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
			_putchar(i);
		_putchar('\n');
	}
}
