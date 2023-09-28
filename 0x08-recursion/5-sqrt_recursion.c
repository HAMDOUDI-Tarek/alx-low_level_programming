#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * _helper - the helper function.
 * @n: number to find square of.
 * @i: same number.
 * Return: the square root.
 */
int helper(int i, int n);

int _sqrt_recursion(int n)
{
	return (helper(1, n));
}

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
	return (helper((i + 1), n));
}
