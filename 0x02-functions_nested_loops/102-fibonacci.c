#include <stdio.h>

int main(void)
{
	int a = 1, b = 2, c, d;

	printf("%d, %d, ", a, b);
	for (c = 1; c < 50; c++)
	{
	        d = a;
	        a = b;
	        b = a + d;
	        printf("%d, ", b);
	}
	b = b + a;
	printf("%d\n", b);
	return (0);
}
