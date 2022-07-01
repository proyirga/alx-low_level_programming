#include<stdio.h>
/**
 * main - Execution starts here
 * Return: 0
 */
int main(void)
{
	int al;

	al = '0';

	do {
		putchar(al);
		if (al < '9')
		{
			putchar(',');
			putchar(' ');
		}
		al++;
	} while (al <= '9');
	putchar('\n');
	return (0);
}
