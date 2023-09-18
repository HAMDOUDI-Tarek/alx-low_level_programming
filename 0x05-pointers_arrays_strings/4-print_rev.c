#include "main.h"
/**
 * print_rev - print a string in reverse.
 *@s: the string to print in reverse.
 */
void print_rev(char *s)
{
	int p = 0;
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	for (p = len - 1; p >= 0; p--)
	{
		_putchar(s[p]);
	}
	_putchar('\n');
}
