#include "main.h"
/**
 * _memcpy - copies memory.
 * @dest: character.
 * @src: character.
 * @n: size.
 * Return: destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
