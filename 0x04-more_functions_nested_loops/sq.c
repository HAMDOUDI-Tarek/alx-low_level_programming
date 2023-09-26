#include <stdio.h>

int sq(int size)
{
	int a, b;

	if (size <= 0)
		putchar('\n');

	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}

int main() 
{
	int a;

	printf("Number: ");
	scanf("%d", &a);
	sq(a);
}
