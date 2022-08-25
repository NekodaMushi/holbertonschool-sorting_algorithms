#include "sort.h"
/**
 * swap_array - Fct swapping 2 nodes
 *
 * @a: Left node getting swapped right
 * @b: Right node getting swapped left
 * @list: double linked list
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

void selection_sort(int *array, size_t size)
{
	size_t index, min_pos, min_checker;

	for (index = 0; index < size; index++)
	{
		min_pos = index;
		for (min_checker = 0; min_checker < size; min_checker++)
		{
			if (array[min_pos] < array[min_checker])
				min_pos = min_checker;
			if (min_pos != index)
			{
				swap_array(min_pos, index, array);
				print_array(array, size);
			}
		}
	}
}
