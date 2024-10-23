#include "sort.h"

/**
 * bubble_sort- Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: The array to be sorted
 * @size: The size of @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx = 0;
	size_t i = 0;
	int swap_element;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (idx = 0; idx < size - i - 1; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				swap_element = array[idx];
				array[idx] = array[idx + 1];
				array[idx + 1] = swap_element;
				print_array(array, size);
			}
		}
	}
}
