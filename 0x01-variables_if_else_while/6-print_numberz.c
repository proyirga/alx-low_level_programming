#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 *
 * Description: Program that prints all single digit numbers of base 10
 * +starting from 0, followed by a new line.
 *
 * Requirements: Not allowed to use any variable of type char
 *	Only use the putchar function
 *	Only use putchar twice in your code
 *	Code should be in the main function
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
