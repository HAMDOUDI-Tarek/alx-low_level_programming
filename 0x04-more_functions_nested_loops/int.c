#include <stdio.h>

int num(int n)
{
	if (n < 0)
		n *= -1;
	putchar('-');
	int a, b, c;

	a = n;
	putchar(a % 10 + '0');

	while (a > 9)
	{
		putchar((a / 10) % 10 + '0');
		a /= 10;
	}
	putchar('\n');
}

int main()
{
	int a;
	printf("Number: ");
	scanf("%d", &a);
	num(a);
}
