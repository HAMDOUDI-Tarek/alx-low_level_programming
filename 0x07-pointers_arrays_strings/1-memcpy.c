#include "holberton.h"
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
		unsinged int i = 0;
		
		while (i < size)
		{
			dest[i] = src[i];
			i++;
		}
	}

	return (dest);
}
