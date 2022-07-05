#include "main.h"

/**
 * _isalpha - checks for alphabet lower case or upper case letters
 * @c: ASCII code representation of letters a to z or A to Z
 * Return: 1 if c is a letter (upper or lower) or otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
	_putchar('\n');
}
