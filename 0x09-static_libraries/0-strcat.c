#include "main.h"
/**
 * *_strcat - concatenate 2 strings.
 * @dest: destination.
 * @src: second string.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
