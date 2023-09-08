#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 i*/
int main(void)
{
	int b;
	char a;

	for (b = 0; b <=10; b++)
		putchar(b + '0');

	for (a = 'a'; a <= 'f'; a++)
		putchar(a);

	putchar('\n');
	return (0);
}
