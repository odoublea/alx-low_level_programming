#include "search_algos.h"

/**
 * binary_search_exp - calls to binary_search to return
 * the index of the number
 *
 * This function takes a sorted array of integers,
 * its size, and a value to search for. It returns
 * the index of the value if found, or -1 if the value
 * is not present in the array or if the array is NULL.
 *
 * @array: input array
 * @start: the starting index of the [sub]array to search
 * @bound: the starting index of the [sub]array to search
 * @value: value to search in
 * Return: index of the number
 */

int binary_search_exp(int *array, size_t start, size_t bound, int value)
{
	size_t i;
	size_t mid;

	if (array == NULL)
		return (-1);
	/* Return -1 if the array is NULL */


	while (start <= bound)
	{
		printf("Searching in array: ");
		for (i = start; i < bound; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		mid = start + (bound - start) / 2;

		if (array[mid] < value)
		{
			start = mid + 1;
		} else if (array[mid] > value)
		{
			bound = mid - 1;
		}
		else
		{
			return (mid);
		}
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index where value is located, or -1 if not present or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, bound;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		i = 1;

		while (i < size && array[i] <= value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i *= 2;
		}
	}

	bound = (i < size) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, bound);

	return (binary_search_exp(array, i / 2, bound, value));
}
