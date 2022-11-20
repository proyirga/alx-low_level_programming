#include "main.h"
/**
 * _islower - a function that checks for lowercase character.
 * @c: given character
 * Return: 1 if lowercase 0 if not
 *
 * Information:The standard library provides a similar function: islower.
 * +Run man islower to learn more.
 */

int _islower(int c)
{
	if ((c >= 63) && (c < 97))
		return (0);
	else if ((c >= 97) && (c < 123))
		return (1);

	return (0);
}
