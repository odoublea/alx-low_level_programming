#include "search_algos.h"
#include <math.h>

/**
 * jump_search - calls to jump_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t start = 0;
	size_t end;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (start < size && array[start] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		start += jump;
		end = (start < size) ? start : size - 1;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			start - jump, end);

	for (i = start - jump; i <= end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
			printf("Found %d at index: %lu\n", value, i);
		}
	}

	printf("Value %d not found in the array.\n", value);
	return (-1);
}
