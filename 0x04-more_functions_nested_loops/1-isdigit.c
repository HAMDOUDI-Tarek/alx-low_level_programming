#include "main.h"
/**
 * _isdigit - detects the digits.
 * @c: the letter to test.
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
