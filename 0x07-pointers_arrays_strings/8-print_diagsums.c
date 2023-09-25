#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: matrix.
 * @size: matrix size.
 */
void print_diagsums(int *a, int size)
{
	int i, sum, tot;

	sum = tot = i = 0;
	while (i < size)
	{
		sum += *(a + (size * i + i));
		tot += *(a + (size * i + size - 1 - i));
		i++;
	}
	printf("%d, ", sum);
	printf("%d\n", tot);
}
