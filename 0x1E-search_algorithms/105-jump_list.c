#include "search_algos.h"

/**
 * jump_list - Search for value in sorted list using Jump search algorithm
 * @list: Pointer to head of list to search
 * @size: Nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to first node where value is located
 * NULL if value not found in head or head is NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int step, i;
	listint_t *cur, *tmp;

	if (list == NULL)
		return (NULL);

	step = sqrt(size);
	cur = list;

	while (cur->next && cur->n < value)
	{
		tmp = cur;

		for (i = step; cur->next && i > 0; --i, cur = cur->next)
			printf("Value checked at index [%lu] = [%d]\n",
					cur->index, cur->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			tmp->index, cur->index);
	cur = tmp;

	while (cur->n < value && cur->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				cur->index, cur->n);
		cur = cur->next;
	}

	if (cur->n == value)
		return printf("Value checked at index [%lu] = [%d]\n",
				cur->index, cur->n), cur;
	return (NULL);
}
