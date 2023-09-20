#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: destination.
 * @src: source.
 * Return: destination.
 */
char *_strcat(char *dest, char *src)
{
	int counter1, counter2;

	counter1 = counter2 = 0;
	while (*(dest + counter1) != '\0')
	{
		counter1++;
	}

	while (counter2 >= 0)
	{
		*(dest + counter1) = *(src + counter2);
		if (*(src + counter2) == '\0')
			break;
		counter1++;
		counter2++;
	}
	return (dest);
}
