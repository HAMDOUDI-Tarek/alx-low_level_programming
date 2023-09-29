#include <stdio.h>

int helper(int i, int n);

int is_prime_number(int n)
{
	if (helper(2, n) == n - 3)
		return (1);
	return (0);
}

int helper(int i, int n)
{
	if (n == 2)
		return (1);
	if (n <= 1 || i == n - 1 || n % i == 0)
		return (0);
	return 1 + helper(i + 1, n);
}

int main()
{
	int a;
	printf("Number: ");
	scanf("%d", &a);
	printf("Result: %d\n", is_prime_number(a));
}
