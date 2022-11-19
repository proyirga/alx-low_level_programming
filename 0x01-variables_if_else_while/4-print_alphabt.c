#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 *
 * Description: Program that prints the alphabet in lowercase, followed by
 * +a new line.
 *	Print all the letters except q and e
 *	Only use the putchar function
 *	Code should be in the main function
 *	Only use putchar twice in your code
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if ((c != 'q') && (c != 'e'))
			putchar(c);
	}
	putchar('\n');
	return (0);
}

