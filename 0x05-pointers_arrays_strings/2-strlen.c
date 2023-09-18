#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: the length.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
