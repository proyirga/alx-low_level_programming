#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: o on success
 *
 * Description: This program will assign a random number to the variable n
 * +each time it is executed.
 * The variable n will store a different value every time you run this program
 * The output of the program should be:
 *	The string Last digit of, followed by n, followed by
 *	+the string is, followed by
 *	if the last digit of n is greater than 5: the string and is greater
 *	than 5
 *	if the last digit of n is 0: the string and is 0
 *	if the last digit of n is less than 6 and not 0:
 *	the string and is less than 6 and not 0
 * followed by a new line
 */

int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %d is %d and is zero\n", n, ld);
	else if (ld != 0 && ld < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	return (0);
}
