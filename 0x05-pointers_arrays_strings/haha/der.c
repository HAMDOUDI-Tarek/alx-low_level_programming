#include <stdio.h>

int main ()
{
	int a;
	int *p;

	a = 5;
	p = &a;
	printf("%d\n", *p);
	*p = 521;
	printf("%d\n", a);

}
