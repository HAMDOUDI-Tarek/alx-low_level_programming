#include "main.h"
/**
 * puts_half - prints half of the string, followed by a new line.
 *@str: original string.
 */
void puts_half(char *str)
{
	int len, n, i;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	n = (len - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
