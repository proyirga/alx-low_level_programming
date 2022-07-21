#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: given number
 * @i: given integer
 * Return: sqrt or -1 if n does not have a natural square root
 */

int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* _sqrt - tests a number for natural sqrt
* @n: given number
* @i: tester
* Return: sqrt
*/

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
