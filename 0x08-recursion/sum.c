#include <stdio.h>

int sum(int n)
{
	if (n < 10)
		return (n);
	return (n % 10) + sum (n / 10);
}

int main()
{
	int a;

	printf("Number: ");
	scanf("%d", &a);
	printf("%d\n", sum(a));
}
