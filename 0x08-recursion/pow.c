#include <stdio.h>

int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, (y-1)));
}

int main()
{
	int a, b;
	
	printf("Number a: ");
	scanf("%d", &a);
	printf("Number b: ");
	scanf("%d", &b);
	printf("Power is: %d\n", _pow_recursion(a, b));
}

