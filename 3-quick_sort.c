#include "sort.h"

/**
 * quick_sort - Sorts an array of integer in ascending order
 * using quick sort algorithm implementing Lomuto partition scheme
 *
 * @array: Array of integers to be sorted
 * @size: Size of @array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	lomuto_quick_sort(array, size, 0, size - 1);
}

/**
 * lomuto_partition_scheme - Partitions an array using the
 * Lomuto Partition scheme
 *
 * @array: Array to be sorted
 * @size: Size of @array
 * @low: Lesser than the pivot
 * @high: Greater than the pivot
 *
 * Return: Position of next element to be swapped
 */
int lomuto_partition_scheme(int *array, size_t size, int low, int high)
{
	int pivot;
	int i;
	int idx;

	i = low - 1;
	pivot = array[high];

	for (idx = low; idx < high; idx++)
	{
		if (array[idx] <= pivot)
		{
			i++;
			if (i != idx)
			{
				swap(&array[i], &array[idx]);
				print_array(array, size);
			}
		}
	}

	if (i + 1 != high)
	{
		swap(&array[high], &array[i + 1]);
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * lomuto_quick_sort - Sorts using the Lomuto partition scheme
 *
 * @array: Array to be sorted
 * @size: Size of @array
 * @low: Lesser than the pivot
 * @high: Greater than the pivot
 */
void lomuto_quick_sort(int *array, size_t size, int low, int high)
{
	int pos;

	if (low < high)
	{
		pos = lomuto_partition_scheme(array, size, low, high);
		lomuto_quick_sort(array, size, low, pos - 1);
		lomuto_quick_sort(array, size, pos + 1, high);
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
