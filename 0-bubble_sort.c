#include "sort.h"
/**
 * bubble_sort - function that sort an array using the
 * Bubble sort algorithm
 * @array: array to be sorted
 * @size: size of array
 * Return: Always Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;

	if (array == NULL or size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 1; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}

}
