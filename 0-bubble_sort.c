#include "sort.h"

/**
 * bubble_sort - a function that sorts an array using bubble sort algorithm
 * @array: the array to be sorted
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp, no_of_swap;

	if (size < 2)
		return;
	while (1)
	{
		no_of_swap = 0;
		for (i = 0; i < (size - 1); ++i)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				++no_of_swap;
				print_array(array, size);
			}
		}
		if (no_of_swap == 0)
			return;
	}
}
