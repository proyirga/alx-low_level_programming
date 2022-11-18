#include<stdio.h>
/**
 * main - Entry point
 * Return: 0 on Success
 * Description:
 * C program that prints the size of various types
 * +on the computer it is compiled and run on.
 *
 * Warnings are allowed
 * You might have to install the package libc6-dev-i386
 * +on your Linux to test the -m32 gcc option
 */

int main(void)
{
	int intType;
	float floatType;
	char charType;
	long int longIntType;
	long long int llIntType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(llIntType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));

	return (0);
}
