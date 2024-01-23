#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"

/**
 * bubble_sort - A function that sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: A pointer to the array of numbers
 * @size: The size of the array
 * Return - 1 Always true
 */

void bubble_sort(int *array, size_t size)
{
	unsigned long int i, j, n;
	int *A, temp;

	A = array;
	n = size;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < ((n - 1) - i); j++)
		{
			if (A[j] > A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
