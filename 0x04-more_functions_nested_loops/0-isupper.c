#include "main.h"
/**
 * _isupper - detects the uppercase letters.
 * @c: the letter to test.
 * Return:0 for success.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
