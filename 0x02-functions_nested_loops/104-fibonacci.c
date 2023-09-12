#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	long int a = 1, b = 2, c, d;

	printf("%ld, %ld", a, b);
	for (c = 1; c < 96; c++)
	{
		d = b + a;
		a = b;
		b = d;
		printf(", %ld", b);
	}
	printf("\n");
	return (0);
}
