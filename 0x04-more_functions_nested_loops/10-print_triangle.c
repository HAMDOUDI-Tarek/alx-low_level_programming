#include "main.h"

/**
 * print_triangle: displays a triangle of a specified size.
 * @size: the size of the triangle.
 */
void print_triangle(int size)
{
	int l, f;
	
	if (size >0)
	{
		for (l = 1; l <= size; l++)
		{
			f = 0;
			while (f < (size - l))
			{
				_putchar(' ');
				f++;
			}
			for (f = (size - l); f < size; f++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
