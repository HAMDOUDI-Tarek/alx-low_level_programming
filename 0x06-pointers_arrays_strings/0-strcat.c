#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * Return: destination.
 */
char *_strcat(char *dest, char *src)
{
	int counter = 0, i = 0;

	for (counter = 0; dest[counter]; counter++)
	{
	}

	for (i = 0; src[i]; i++)
	{
		dest[counter] = src[i];
		counter++;
	}
	return (dest);
}
