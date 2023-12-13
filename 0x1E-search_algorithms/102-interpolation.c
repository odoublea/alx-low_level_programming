#include "search_algos.h"

/**
 * interpolation_search - calls to interpolation_search to return
 * the index of the number
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: The first index where value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

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
