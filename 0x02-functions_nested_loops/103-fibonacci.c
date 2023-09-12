#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	long int a = 1, b = 2, d;
	int sum = b;

	while (sum <= 4000000)
	{
		d = b + a;
		a = b;
		b = d;
		if (d % 2 == 0)
			sum += d;
	}
	printf("%d\n", sum);
	return (0);
}
