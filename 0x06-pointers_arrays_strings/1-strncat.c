#include "main.h"
/**
 * _strncat - concatenate 2 strings.
 * @dest: destination.
 * @src: source.
 * @n: byte number.
 * Return: destination.
 */
char *_strncat(char *dest, char *src, int n)
{
	int counter1, counter2;

	counter1 = counter2 = 0;
	while (*(dest + counter1) != '\0')
	{
		counter1++;
	}

	while (counter2 < n)
	{
		*(dest + counter1) = *(src + counter2);
		if (*(src + counter2) == '\0')
			break;
		counter1++;
		counter2++;
	}
	return (dest);
}
