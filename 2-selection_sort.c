#include "sort.h"
/**
 * swap_array - Fct swapping 2 nodes
 *
 * @a: Left node getting swapped right
 * @b: Right node getting swapped left
 * @array: double linked list
 *
 * Return: Nothing
 */
void swap_array(int a, int b, int *array)
{
	int tmp;

	tmp = array[a];
	array[a] = array[b];
	array[b] = tmp;
}
/**
 * selection_sort - sort array with selection method
 *
 * @array: array used
 * @size: size of array
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	unsigned int index, min_checker, pos_ini;

	for (index = 0; index < size; index++)
	{
		pos_ini = index;
		for (min_checker = index + 1; min_checker < size; min_checker++)
		{
			if (array[pos_ini] > array[min_checker])
				pos_ini = min_checker;
		}
		if (index != pos_ini)
		{
			swap_array(pos_ini, index, array);
			print_array(array, size);
		}
	}
}
