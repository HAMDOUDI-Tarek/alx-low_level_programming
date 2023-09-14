#include "main.h"
/**
 * _isdigit - detects the digits.
 * @c: the digit to test.
 * Return: 0 for success.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
