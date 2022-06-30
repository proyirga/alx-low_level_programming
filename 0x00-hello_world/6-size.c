#include<stdio.h>
/** 
 *main - Entry point
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;
	long int l;
	long long ll;
	float f;
	char c;

	printf("Size of a char:%lubyte(s)\n", sizeof(c));
	printf("Size of an int:%lubyte(s)\n", sizeof(i));
	printf("Size of a long int:%lubyte(s)\n", sizeof(l));
	printf("Size of a long long int:%lubyte(s)\n", sizeof(ll));
	printf("Size of a float:%lubyte(s)\n", sizeof(f));
	return (0);
}
