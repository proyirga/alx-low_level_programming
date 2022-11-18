#include "function_pointers.h"

/**
 * print_name - prints name of a person
 * @name: pointer to a name var
 * @f: pointer function
 *
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
