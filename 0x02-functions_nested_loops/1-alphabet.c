#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase,
 * +followed by a new line.
 * Return: void
 *
 * Requirements:
 *	Prototype: void print_alphabet(void);
 *	Only use _putchar twice in your code
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
}
