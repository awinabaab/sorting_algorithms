#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the selection sort algorithm
 *
 * @array: Array of integers to sort
 * @size: Size of @array
 */
void selection_sort(int *array, size_t size)
{
	size_t idx = 0;
	size_t i = 0;
	size_t j = 0;
	int min = 0;
	int swap_element = 0;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		j = i;

		for (idx = i + 1; idx < size; idx++)
		{
			if (array[idx] < min)
			{
				min = array[idx];
				j = idx;
			}
		}
		if (j != i)
		{
			swap_element = array[i];
			array[i] = array[j];
			array[j] = swap_element;
			print_array(array, size);
		}
	}
}
