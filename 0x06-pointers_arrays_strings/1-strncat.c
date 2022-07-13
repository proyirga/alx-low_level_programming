#include "main.h"
#include <string.h>

/**
 * _strncat - concatnates string
 * @dest: first parameter
 * @src: second parameter
 * @n: 3rd parameter
 * Return: returns a string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
