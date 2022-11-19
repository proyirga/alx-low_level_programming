#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 on success
 *
 * Description: This program will assign a random number to the variable
 * +n each time it is executed. Print whether the number stored in the
 * +variable n is positive or negative.
 *
 * The output of the program should be:
 * The number, followed by
 *	if the number is greater than 0: is positive
 *	if the number is 0: is zero
 *	if the number is less than 0: is negative
 * followed by a new line
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
