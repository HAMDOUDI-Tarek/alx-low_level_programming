#include <stdio.h>
/**
 * main - Entry point.
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int l, f;

	for (l = 1; l <= size; l++)
	{
		f = 0;
		while (f < (size - l))
		{
			_putchar(' ');
			f++;
		}
		for (f = (size - l ); f < size; f++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
