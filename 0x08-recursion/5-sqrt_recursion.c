#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find square of.
 * Return: the square root.
 */
int _sqrt_recursion(int n)
{
	return (_helper(1, n));
}

/**
 * _helper - the helper function.
 * @i: number incrimented until root found.
 * @n: number to find root of.
 * Return: recursion.
 */
int _helper(int i, int n)
{
	if (n < 0 || i * i > n)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (i * i == n)
		return (i);
	return (_helper((i + 1), n));
}
