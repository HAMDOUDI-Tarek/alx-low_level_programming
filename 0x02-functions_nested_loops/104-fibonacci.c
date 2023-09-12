#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	int c, o;
	unsigned long a = 1;
	unsigned long b = 1;
	unsigned long sum = 0;
	long ah, at, bh, bt, sum_h, sum_t;

	printf("1");

	for (c = 2; c < 93; c++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %lu", sum);
	}

	ah = a / 1000000000;
	at = a % 1000000000;
	bh = b / 1000000000;
	bt = b % 1000000000;

	for (; c < 99; c++)
	{
		o = (at + bt) / 1000000000;
		sum_t = (at + bt) - (1000000000 * o);
		sum_h = (ah + bh) + o;

		printf(", %lu%lu", sum_h, sum_t);

		ah = bh;
		at = bt;
		bh = sum_h;
		bt = sum_t;
	}


	printf("\n");

	return (0);
}
