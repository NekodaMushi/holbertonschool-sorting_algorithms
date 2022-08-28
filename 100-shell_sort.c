#include "sort.h"
/**
 * shell_sort - Sort an array using shell algorithm
 *
 * @array: Array to sort
 * @size: Size of the array
 *
 * Return: Anything, cause void function
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, i;
	int j, tmp;

	if (!array || size <= 1)
		return;

	while (gap <= size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			tmp = array[i];
			j = i - gap;
			while (j >= 0 && tmp < array[j])
			{
				array[j + gap] = array[j];
				j -= gap;
			}
			array[j + gap] = tmp;
		}
		print_array(array, size);
		gap = gap / 3;
	}
}
