#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
return (sqrt(n, 1));
}

/**
 * sqrt - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int sqrt(int n, int val)
{

if (val * val == n)
	return (val);
else if (val * val < n)
	return  (sqrt(n, val + 1));
else
	return (-1);

}
