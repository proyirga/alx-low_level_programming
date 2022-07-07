#include "main.h"

/**
 * _isupper - checks for a character if it is uppercase or lowercase
 * returns 1 is upper and otherwise  0	id lowercase
 * @c: parameter
 * Return: return value
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
