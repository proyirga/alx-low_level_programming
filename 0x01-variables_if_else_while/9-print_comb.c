#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 *
 * Description: Program that prints all possible combinations of single-digit
 * +numbers.
 *
 * Requirements:
 *	Numbers must be separated by ,, followed by a space
 *	Numbers should be printed in ascending order
 *	Only use the putchar function
 *	Code should be in the main function
 *	Only use putchar four times maximum in your code
 *	Not allowed to use any variable of type char
 */

int main(void)
{
	int d;

	for (d = 48; d <= 57; d++)
	{
		putchar(d);
		if (d == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
