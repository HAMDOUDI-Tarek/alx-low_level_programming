#include "main.h"
/**
 * _abs - detects the letters.
 * @c: the letter to test.
 * Return: Always 0.
 */
int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}
