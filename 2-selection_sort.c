#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers
 * in ascending order using the Selection sort algorithm
 * @array: Array that needs sorting
 * @size: The size of the array
 *  Return: 1 always true
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, n;
	int temp;

	n = size;

	if (array == NULL)
	{
		return;
	}
	if (size < 2)
	{
		return;
	}
	for (i = 0; i < n - 1; i++)
	{
		min = i;

		for (j = i + 1; j < n; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;

		print_array(array, size);
	}
}


