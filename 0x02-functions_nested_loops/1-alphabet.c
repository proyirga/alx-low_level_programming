#include "main.h"

/**
 * print_alphabet - print letters a -z
 * Return: no return value
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
