#include "main.h"

/**
 * _isdigit - checks for digit, returns 1 if digit and otherwise  0 for non digit
 * @c: parameter
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
