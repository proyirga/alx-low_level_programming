#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 *
 * Description: a program that prints the alphabet in lowercase, followed
 * +by a new line.
 * Only use the putchar function
 *	Code should be in the main function
 *	Only use putchar twice in your code
 *
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
return (0);
}
