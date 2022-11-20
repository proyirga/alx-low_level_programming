#include "main.h"
/**
 * _abs - Write a function that computes the absolute value of an integer.
 * @n: given number
 * Return: abs(n)
 *
 * Information: The standard library provides a similar function: abs.
 * +Run man abs to learn more.
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
