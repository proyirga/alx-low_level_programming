#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* User defined prototypes */
void print_array(int *array, size_t low_index, size_t high_index);

#endif /* SEARCH_ALGOS_H */
