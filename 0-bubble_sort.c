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
	size_t j;
	int tmp, flag;

	if (array == NULL || size < 2)
		return;

	flag = 1;

	while (flag == 1)
	{
		flag = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
				print_array(array, size);
				flag = 1;
			}
		}
	}

}
