#include <stdio.h>
/**
 * _pow_recursion:  returns the value of x raised to the power of y.
 * @x: number to calculate the power of.
 * @y: the power.
 * Return: Result of power.
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, (y - 1)));
}
