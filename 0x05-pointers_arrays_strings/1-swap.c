#include "main.h"

/*
 * swap_int(): swaps the value of two integers
 * *a: pointer 1
 * *b: pointer 2
 * return: void
 */

void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
