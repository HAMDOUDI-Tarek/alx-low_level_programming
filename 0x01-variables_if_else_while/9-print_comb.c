#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;
	
	b = 9;
	for (a = 0; a < 9; a++)
	{
		putchar(a + '0');
		putchar(',');
		putchar('\n');
	}

	putchar(b + '\n');
	return (0);
}
