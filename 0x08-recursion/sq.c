#include <stdio.h>

int helper(int i, int n);

int _sqrt_recursion(int n)
{
	helper(n, n);
}

int helper(int i, int n)
{
	if (n < 0 || i == n)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (i * i == n)
		return (i);
	return (helper((i - 1), n));
}
int main()
{
	int a;
	
	printf("Number a: ");
	scanf("%d", &a);
	printf("Root of a: %d\n", _sqrt_recursion(a));
}

