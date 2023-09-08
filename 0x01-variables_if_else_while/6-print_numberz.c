#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		b = (char) a;
		putchar(b);
	}

	putchar('\n');
	return (0);
}
