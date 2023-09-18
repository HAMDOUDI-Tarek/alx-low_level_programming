#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout.
 *@str: the printed string.
 */

void _puts(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
		_putchar(str[p]);
	}
	_putchar('\n');
}
