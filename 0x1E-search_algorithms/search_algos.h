#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

/* advanced task struct for advanced jump search in linked list */

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

listint_t *jump_list(listint_t *list, size_t size, int value);
void print_list(const listint_t *list);
void free_list(listint_t *list);
listint_t *create_list(int *array, size_t size);


/* advanced task for linear skipped list*/

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
skiplist_t *linear_skip(skiplist_t *list, int value);


/*Advanced tasked*/
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
int binary_search_exp(int *array, size_t left, size_t right, int value);
int exponential_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
int binary_search_recursive(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);



#endif
