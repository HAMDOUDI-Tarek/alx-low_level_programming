#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is prime, otherwise 0.
 * @n: number to evaluate.
 * Return: Result.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (helper(n, n - 1));
}

/**
 * helper - the helper function.
 * @n: number to evaluate
 * @i: concatenated number.
 * Return: 1 if n is prime, 0 if not.
 */
int helper(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (helper(n, i - 1));
}
