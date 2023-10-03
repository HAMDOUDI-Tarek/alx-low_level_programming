#include <stdio.h>

int change(int *a)
{
	*a = 56;
}

int main()
{
	int a, *p;

	a = 5;
	p = &a;
	printf("Value of a: %d\n", a);

	change(p);

	printf("New value of a: %d\n", a);
}
