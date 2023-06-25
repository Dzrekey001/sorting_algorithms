#include "sort.h"
/**
 * insertion_sort_list - sort a double linked list of integers
 * @list: double linked list to be sorted
 * Return: Always Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insertion_point, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		insertion_point = current->prev;

		while (insertion_point != NULL && insertion_point->n > current->n)
		{
			tmp = insertion_point->prev;

			insertion_point->next = current->next;

			if (insertion_point->next != NULL)
				insertion_point->next->prev = insertion_point;

			current->prev = insertion_point->prev;
			current->next = insertion_point;

			if (current->prev != NULL)
				current->prev->next = current;
			else
				*list = current;

			insertion_point->prev = current;
			insertion_point = tmp;
			print_list(*list);

		}
		current = current->next;
	}
}

