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
	char c, cc;

	c = 'a';
	cc = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (cc <= 'Z')
	{
		putchar(cc);
		cc++;
	}
	putchar('\n');

	return (0);
}

