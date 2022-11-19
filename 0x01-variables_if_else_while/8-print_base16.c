#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 *
 * Description: Program that prints all the numbers of base 16 in lowercase,
 * +followed by a new line.
 *
 * Requirements:
 *	Only use the putchar function
 *	Code should be in the main function
 *	Only use putchar three times in your code
 */

int main(void)
{
	int i, j;

	i = 48;
	j = 57;

	while (i <= j)
	{
		putchar(i);
		i++;
		if (i == 57)
		{
			putchar(i);
			i = 97;
			j = 102;
		}
	}
	putchar('\n');

	return (0);


}
