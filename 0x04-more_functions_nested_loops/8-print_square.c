#include "main.h"
/**
 * print_square - display a diagonal line.
 * @n: length of line.
 * Return: Nothing.
 */
void print_square(int n)
{
	int a, l;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			l = 0;
			while (l < n)
			{
				_putchar('#');
				l++;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
