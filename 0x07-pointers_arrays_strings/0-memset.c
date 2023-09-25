#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: memo area.
 * @b: constant byte.
 * @n: bytes.
 * Return: memo area (s).
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int size = n;

	if (size > 0)
	{
		unsigned int i = 0;

		while (i < size)
		{
			s[i] = b;
			i++;
		}
	}

	return (s);
}
