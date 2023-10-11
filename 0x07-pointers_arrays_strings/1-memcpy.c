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


	if (n > 0)
	{
		unsigned int i = 0;

		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}

	return (dest);
}
