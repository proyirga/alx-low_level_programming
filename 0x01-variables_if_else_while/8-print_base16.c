#include<stdio.h>
/**
 * main - Execution starts here
 * Return: 0
 */
int main(void)
{
	char al;

	for (al = '0'; al <= '9'; al++)
	{
		putchar(al);
	}
	for (al = 'a'; al <= 'f'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
