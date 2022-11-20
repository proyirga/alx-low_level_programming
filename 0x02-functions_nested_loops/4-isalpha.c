#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: given character
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 *
 * Information: The standard library provides a similar function: isalpha.
 * +Run man isalpha to learn more.
 */

int _isalpha(int c)
{
	int i;

	i = 0;

	if (((c >= 63) && (c < 97)) || ((c >= 97) && (c < 123)))
		i = 1;
	return (i);
}
