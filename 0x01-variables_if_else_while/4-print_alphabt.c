#include<stdio.h>
/**
 * main - Execution starts here
 * Return: 0
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e')
		{
			if (al != 'q')
			{
				putchar(al);
			}
		}
	}
	putchar('\n');
	return (0);
}
