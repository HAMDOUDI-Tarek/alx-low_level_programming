#include "main.h"
/**
 * print_diagonal - display a diagonal line.
 * @n: length of line.
 * Return: Nothing.
 */
void print_diagonal(int n)
{
	int a, l;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			l = 0;
			while (l < a)
			{
				_putchar(' ');
				l++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
