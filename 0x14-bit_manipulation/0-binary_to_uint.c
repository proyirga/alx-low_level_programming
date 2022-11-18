#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * ****there is non 0 or one chars in the string b
 * ****b is nul
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, power;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (power = 1, uint = 0, i--; i >= 0; i--, power *= 2)
	{
		if (b[i] == '1')
			uint += power;
	}

	return (uint);
}
