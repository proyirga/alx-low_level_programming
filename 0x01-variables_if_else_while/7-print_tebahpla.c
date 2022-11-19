#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 *
 * Description: Program that prints the lowercase alphabet in reverse,
 * +followed by a new line.
 *
 * Requirements:
 *	Only use the putchar function
 *	Code should be in the main function
 *	Only use putchar twice in the code
 */

int main(void)
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}

