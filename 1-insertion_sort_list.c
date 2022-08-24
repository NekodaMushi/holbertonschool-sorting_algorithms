#include "sort.h"

/**
 * insertion_sort_list - Fct sorting array of integer
 *
 * @a: Left node getting swapped right
 * @b: Right node getting swapped left
 * @list: double linked list
 *
 * Return: Nothing
 */

void swap(listint_t *a, listint_t *b, listint_t **list)
{
	listint_t *tmp;

	tmp = a->prev;

	if (tmp != NULL)
		tmp->next = b;
	else
		*list = b;

	b->prev = tmp;
	a->prev = b;
	a->next = b->next;
	b->next = a;

	if (a->next)
		a->next->prev = a;
	else
		a->next = NULL;
}

void insertion_sort_list(listint_t **list)
{
	listint_t *cursor = NULL;

	cursor = (*list)->next;

	while (cursor)
	{
		while (cursor->prev && cursor->prev->n > cursor->n)
		{
			swap(cursor->prev, cursor, list);
			print_list(*list);
		}
		cursor = cursor->next;
	}
}
