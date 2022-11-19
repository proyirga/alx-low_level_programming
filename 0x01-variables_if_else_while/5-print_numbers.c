#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 on success
 *
 * Descripton: Program that prints all single digit numbers of base 10
 * +starting from 0, followed by a new line.
 *
 * Code should be in the main function
 */

int main(void)
{
	int i;

	for (i = 0; i <= 10; i++)
		printf("%d", i);
	printf("\n");

	return (0);
}
