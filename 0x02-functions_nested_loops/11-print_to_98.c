#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - detects the letters.
 * @n: the letter to start from.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int c, a = 98;

	if (n <= 98)
	{
		for (c = n; c <= 97; c++)
			printf("%d, ", c);
	}
	else
	{
		for (c = n; c >= 99; c--)
			printf("%d, ", c);
	}
	printf("%d", a);
}
