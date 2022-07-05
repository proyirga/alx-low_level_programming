#include "main.h"

/**
 * _islower - check for lowercase alphabet
 * @c: ASCII code representaion of alphabets
 * Return: 1 on success and 0 on failur
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
