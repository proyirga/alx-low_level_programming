#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size parameter
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr_to_mem;

	ptr_to_mem = malloc(b);
	if (ptr_to_mem == NULL)
		exit(98);
	return (ptr_to_mem);
}
