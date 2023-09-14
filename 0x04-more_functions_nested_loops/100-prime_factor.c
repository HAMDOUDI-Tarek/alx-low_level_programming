#include <stdio.h>
/**
 * main - Entry point.
 * Return: Always 0.
 */
int main(void)
{
	long int num = 612852475143;
	long int div;

	for (div = 2; div < num; div++)
	{
		if (num % div == 0)
			num = num / div;
	}
	printf("%ld\n", div);
	return (0);
}
