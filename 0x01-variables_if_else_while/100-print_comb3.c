#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 *
 * Description: Program that prints all possible different combinations
 * +of two digits.
 *
 * Requirements:
 *	Numbers must be separated by ,, followed by a space
 *	The two digits must be different, 01 and 10 are considered the
 *	+same combination of the two digits 0 and 1
 *	Print only the smallest combination of two digits
 *	Numbers should be printed in ascending order, with two digits
 *	Only use the putchar function
 *	Only use putchar five times maximum in the code
 *	Not allowed to use any variable of type char
 *	Code should be in the main function
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
