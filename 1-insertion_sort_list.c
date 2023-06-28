#include "sort.h"
#include "helper.h"

/**
 * insertion_sort_list - a function that sorts a listint_t using the insertion
 * sort algorithm.
 * @list: double pointer to a listint_t
 */
void insertion_sort_list(listint_t **list)
{
	int i = 1, j;
	listint_t *current, *prev;

	if (list == NULL)
		return;
	if ((*list) == NULL)
		return;
	prev = (*list);
	current = prev->next;
	while (current)
	{
		j = i;
		while (j > 0 && (current->prev->n > current->n))
		{
			swap_listint_t(&current);
			if (current->prev)
			{
				prev = current->prev;
			}
			else
			{
				current = current->next;
				prev = current->prev;
				*list = prev;
			}
			print_list(*list);
			j--;
		}
		i++;
		prev = pointer_to_index(list, i);
		current = prev->next;
	}
}
