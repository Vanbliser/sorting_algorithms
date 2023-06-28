#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * selection sort algorithm.
 * @array: The array to sort
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, m;
	int s;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		m = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[m])
				m = j;
		}
		if (i != m)
		{
			s = array[i];
			array[i] = array[m];
			array[m] = s;
			print_array(array, size);
		}
	}
}
