#ifndef HELPER_H
#define HELPER_H

/**
 * swap_listint_t - a function that swaps the current listint_t with its
 * previous listint_t.
 * @head: the current listint_t.
 */
void swap_listint_t(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = current->prev;

	current->prev = current->prev->prev;
	if (current->prev)
		current->prev->next = current;
	prev->next = current->next;
	if (current->next)
		current->next->prev = prev;
	current->next = prev;
	current->next->prev = current;
}

/**
 * pointer_to_index - a function that returns pointer to listint_t at index
 * @head: pointer to the head of listint_t
 * @index: the index position to return
 *
 * Return: pointer to listint_t at index
 */
listint_t *pointer_to_index(listint_t **head, int index)
{
	int i = 1;
	listint_t *current = *head;

	while (current)
	{
		if (index == i)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}

#endif /* HELPER_H */
