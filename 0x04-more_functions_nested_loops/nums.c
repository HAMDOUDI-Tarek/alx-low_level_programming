#include <stdio.h>

void main()
{
	int a, i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				putchar(a / 10 + '0');
			putchar(a % 10 + '0');
		}
		putchar('\n');
	}
}
