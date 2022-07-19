#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: pointer to char
 * @c: stores found char
 * Return: Returns a pointer to the first occurrence of the character c
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
