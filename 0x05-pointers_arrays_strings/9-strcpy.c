#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src, to the buffer.
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len]; len++)
	{
	}

	for (i = 0; i <= len ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
