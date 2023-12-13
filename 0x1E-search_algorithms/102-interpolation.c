#include "search_algos.h"

/**
 * interpolation_search - calls to interpolation_search to return
 * the index of the number
 *
 * @array: Pointer to the first element of the array
 * @size: size of the array
 * @value: value to search in
 * Return: Index where value is located, or -1 if not present or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	pos = (low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low])));

	if (array == NULL)
	{
		return (-1);
	}

	while ((array[high] != array[low]) && (value >= array[low]) &&
			(value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
