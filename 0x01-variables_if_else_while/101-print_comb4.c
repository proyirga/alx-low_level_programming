#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 *
 * Description: Program that prints all possible different combinations
 * +of three digits.
 *
 * Requirements:
 *	Numbers must be separated by ,, followed by a space
 *	The three digits must be different, 012, 120, 102, 021, 201, 210 are
 *	+considered the same combination of the three digits 0, 1 and 2
 *	Print only the smallest combination of three digits
 *	Numbers should be printed in ascending order, with three digits
 *	Only use the putchar function
 *	Only use putchar six times maximum in the code
 *	Not allowed to use any variable of type char
 *	Code should be in the main function
 */

int main(void)
{
	int i, j, z;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (z = j + 1; z <= 57; z++)
			{
				putchar(i);
				putchar(j);
				putchar(z);
				if (i < 55)
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');

	return (0);
}
