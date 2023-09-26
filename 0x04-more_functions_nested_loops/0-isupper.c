#include "main.h"
/**
 * _isupper - detects the uppercase letters.
 * @c: letter to test.
 * Return: 0 (success).
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
