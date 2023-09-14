#include "main.h"
#include <stdio.h>
/**
 * print_triangle: displays a triangle.
 * @size: the size of the triangle.
 * Return: nothing.
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
