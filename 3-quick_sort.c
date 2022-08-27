#include "sort.h"

/**
 * quick_swap_array - Fct swapping 2 nodes
 *
 * @a: Left node getting swapped right
 * @b: Right node getting swapped left
 *
 * Return: Nothing
 */

void quick_swap_array(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
/**
 * partition - Fct swapping 2 nodes
 *
 * @a: Left node getting swapped right
 * @low: Right node getting swapped left
 * @high: double linked list
 * @size: number of elements in array
 * Return: (end) if succeeded
 */
int partition(int *a, int low, int high, size_t size)
{
	int bot, top, pivot;

	pivot = a[high];
	top = low;

	for (bot = low; bot < high; bot++)
	{
		if (a[bot] < pivot)
		{
			if (bot != top)
			{
				quick_swap_array(&a[bot], &a[top]);
				print_array(a, size);
			}
			top++;
		}
	}
	if (a[high] < a[top])
	{
		quick_swap_array(&a[top], &a[high]);
		print_array(a, size);
	}
	return (top);
}

/**
 * custom_quick_sort - Fct swapping 2 nodes
 *
 * @array: Left node getting swapped right
 * @low: Right node getting swapped left
 * @high: double linked list
 * @size: number of elements in array
 *
 * Return: (end) if succeeded
 */

void custom_quick_sort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int loc = partition(array, low, high, size);

		custom_quick_sort(array, low, loc - 1, size);
		custom_quick_sort(array, loc + 1, high, size);
	}
}

/**
 * quick_sort - fct calling custom quick_sort
 *
 * @array: list to be sorted
 * @size: number of elements in array
 *
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = (size - 1);

	if (!array || size < 2)
		return;

	custom_quick_sort(array, low, high, size);
}
