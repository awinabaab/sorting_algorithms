#include "sort.h"

/**
 * shell_sort - Sorts an array in ascending order
 * using the shell sort algorithm, using the Knuth sequence
 *
 * @array: Array to be sorted
 * @size: Size of @array
 */
void shell_sort(int *array, size_t size)
{
	size_t interval;
	size_t i;
	size_t idx;

	if (!array || size < 2)
		return;

	for (interval = 1; interval < (size / 3);)
		interval = interval * 3 + 1;

	for (; interval >= 1; interval /= 3)
	{
		for (i = interval; i < size; i++)
		{
			idx = i;
			for (;
					idx >= interval && (array[idx - interval] > array[idx]);
					idx -= interval
			    )
				swap(&array[idx], &array[idx - interval]);
		}
		print_array(array, size);
	}
}

/**
 * swap - Swaps two integers
 *
 * @a: First integer
 * @b: Second integer
 */
void swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
