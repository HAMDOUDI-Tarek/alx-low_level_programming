#include <stdio.h>
/**
 * main - Entry point
 *
 * Retrun: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q')
		{
			if (a != 'e')
				putchar(a);
		}
	}

	putchar('\n');
	return (0);
}

