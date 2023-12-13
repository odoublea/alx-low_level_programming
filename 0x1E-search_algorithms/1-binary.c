#include "search_algos.h"

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * This function takes a sorted array of integers,
 * its size, and a value to search for. It returns
 * the index of the value if found, or -1 if the value
 * is not present in the array or if the array is NULL.
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t i;
	size_t mid;

	if (array == NULL)
		return (-1);
	/* Return -1 if the array is NULL */


	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		mid = l + (r - l) / 2;

		if (array[mid] < value)
		{
			l = mid + 1;
		} else if (array[mid] > value)
		{
			r = mid - 1;
		}
		else
		{
			/* Return the index if the value is found */
			return (mid);
			printf("Found %d at index: %lu\n", value, (unsigned long)mid);
		}
	}

	return (-1);
}
