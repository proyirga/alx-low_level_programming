#include "main.h"

/**
 * string_toupper - converting a string to upper case
 * @x: string param
 * Return: Upper case string
 */

char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}
	return (x);
}
