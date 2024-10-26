#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using the insertion sort algorithm
 *
 * @list: Doubly linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current_node = NULL;
	listint_t *prev_node = NULL;

	if (!list || !*list || !(*list)->next)
		return;

	current_node = (*list)->next;
	while (current_node)
	{
		prev_node = current_node->prev;
		while (prev_node && prev_node->n > current_node->n)
		{
			if (prev_node->prev)
				prev_node->prev->next = current_node;
			else
				*list = current_node;

			if (current_node->next)
				current_node->next->prev = prev_node;

			prev_node->next = current_node->next;
			current_node->prev = prev_node->prev;
			current_node->next = prev_node;
			prev_node->prev = current_node;
			print_list(*list);
			prev_node = current_node->prev;
		}
		current_node = current_node->next;
	}
}
