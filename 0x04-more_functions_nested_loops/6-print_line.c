#include "main.h"
/**
 * print_line - display a line of a specifi length.
 * @n: length of line.
 * Return: Nothing.
 */
int print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
			_putchar('_');
	}
	_putchar('\n')
}
