#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a char.
 * @size: array size.
 * @c: storaged char.
 * Return: array of chars.
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
