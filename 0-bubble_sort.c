#include "sort.h"

/**
 * bubble_sort - Fct sorting array of integer
 *
 * @array: array checked by fct
 * @size: size
 *
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	int tmp;
	unsigned int i, j;

	if (size < 2)
		return;
	for (j = 0; j < size; j++)
	{
		for (i = 0; i < size; i++) // parcours tout le tableau
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				// print tableau a faire
				print_array(array, size);
			}
		}
	}
}
