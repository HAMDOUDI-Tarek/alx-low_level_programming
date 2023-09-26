#include <stdio.h>

void main()
{
	int a = 1;

	putchar(a + '0');

	for (a = 2; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf(" FizzBuzz");
		else if (a % 3 == 0)
			printf(" Fizz");
		else if (a % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", a);
	}
	putchar('\n');
}

