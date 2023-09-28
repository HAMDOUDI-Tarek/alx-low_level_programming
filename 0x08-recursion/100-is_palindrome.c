#include "main.h"
/**
 * _strlen_recursion - returns 1 if a string is a palindrome and 0 if not.
 * @s: pointer to string.
 * Return: result.
 */

int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen(++s));
}

/**
 * pal - palindrome checker.
 * @s: pointer to string.
 * @l: position.
 * Return: result.
 */

int pal(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (pal(s + 1, l - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (pal(s, len - 1));
}
