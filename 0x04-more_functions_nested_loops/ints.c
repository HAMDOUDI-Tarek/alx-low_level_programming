#include <stdio.h>

int in(int n)
{
	if (n < 0)
	{
		n *= -1;
		putchar('-');
	}

	int a, b;
	
	a = n;
	b = 1;

	while (a > 9)
	{
		a /= 10;
		b *= 10;
	}
	while (b >= 1)
	{
		putchar((n / b) % 10 + '0');
		b /= 10;
	}
	putchar('\n');
}

int main ()
{
	int a;
	printf("Number: ");
	scanf("%d", &a);
	in(a);
}
