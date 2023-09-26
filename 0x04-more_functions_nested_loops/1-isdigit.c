#include "main.h"
/**
 * _isdigit - detects the digits.
 * @c: digit to test.
 * Return: 0 (success).
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
