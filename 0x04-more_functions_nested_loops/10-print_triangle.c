#include "main.h"

/**
 * print_triangle - display a triangle.
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
		putchar('\n');

	else
	{
		int a, b;

		for (a = 1; a <= size; a++)
		{
			for (b = size; b > a; b--)
				putchar(' ');

			for (b = 1; b <= a; b++)
				putchar('#');
			putchar('\n');
		}
	}
}
