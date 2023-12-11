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
	int l = 0;
	int r = size - 1;

	if (array == NULL)
		return (-1);
	/* Return -1 if the array is NULL */


	while (l <= r)
	{
		int mid = l + (r - l) / 2;

		if (array[mid] == value)
			return (mid);
		/* Return the index if the value is found */

		if (array[mid] < value)
		{
			l = mid + 1;
		} else
		{
			r = mid - 1;
		}
	}

	return (-1);
	/* Return -1 if the value is not present in the array */
}
