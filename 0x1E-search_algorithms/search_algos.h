#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/*Advanced tasked*/
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
int binary_search_exp(int *array, size_t left, size_t right, int value);
int exponential_search(int *array, size_t size, int value);



#endif
