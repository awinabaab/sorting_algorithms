#ifndef SORT_H
#define SORT_H

#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* PRINT FUNCTION PROTOTYPES */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* SORT FUNCTION PROTOTYPES */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int lomuto_partition_scheme(int *array, size_t size, int low, int high);
void swap(int *a, int *b);
void lomuto_quick_sort(int *array, size_t size, int low, int high);
void shell_sort(int *array, size_t size);

#endif /* SORT_H */
