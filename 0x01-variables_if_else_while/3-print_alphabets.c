#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 *
 * Description: Program that prints the alphabet in lowercase, and then
 * +in uppercase, followed by a new line.
 * Only use the putchar function
 *	Code should be in the main function
 *	Only use putchar three times in your code
 */

int main(void)
{
	char c, z;

	c = 'a';
	z = 'z';

	while (c <= z)
	{
		putchar(c);
		c++;
		if (c == 'z')
		{
			putchar(c);
			c = 'A';
			z = 'Z';
		}
	}
	putchar('\n');

	return (0);
}

