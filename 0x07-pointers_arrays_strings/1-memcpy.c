#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: destination.
 * @src: source.
 * @n: bytes.
 * Return: destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int size = n;

	if (size > 0)
	{
		unsigned int i = 0;

		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}

	return (dest);
}
