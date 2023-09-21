#include "sort.h"

/**
 * sorts an arr of int in ascend order,
 * Bubble sort algorithm
 * the array
 * size of the array
**/

void bubble_sort(int *array, size_t size)
{
	unsigned int i, n = size;
	int temp;
	int new;

	do {
		new = 0;

		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				new = i;
				print_array(array, size);
			}
		}
		n = new;
	} while (n >= 1);
}