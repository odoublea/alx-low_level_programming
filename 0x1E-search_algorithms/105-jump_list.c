#include <stdio.h>
#include "search_algos.h"

/**
 * jump_list - Search for a value in a sorted list using the Jump search algorithm
 * @list: Pointer to the head of the list to search
 * @size: Number of nodes in the list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where the value is located, or NULL
 * if the value is not found in the head or the head is NULL
 * Print the value of the list every time compared with the search value
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int jump, i;
	listint_t *cur, *tmp;

	if (!list)
		return (NULL);

	jump = sqrt(size);
	cur = list;

	do {
		tmp = cur;
		for (i = jump; cur->next && i > 0; --i, cur = cur->next)
			printf("Value checked at index [%lu] = [%d]\n",
					cur->index, cur->n);

		printf("Value checked at index [%lu] = [%d]\n",
				cur->index, cur->n);

		if (cur->n >= value || !cur->next)
			break;
	} while (cur->n < value);

	printf("Value found between indexes [%lu] and [%lu]\n",
			tmp->index, cur->index);

	while (cur->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				cur->index, cur->n);
		tmp = cur;
		cur = cur->next;

		if (!cur || cur->n == value)
			return (printf("Value checked at index [%lu] = [%d]\n",
						tmp->index, tmp->n), cur);

		if (!cur->next)
			return (printf("Value checked at index [%lu] = [%d]\n",
						cur->index, cur->n), NULL);
	}
	return (NULL);
}
