#include "main.h"
#include <stdio.h>
/**
 * main - Entry point.
 * Return: Always 0.
 */
int main(void)
{
	int n = 1;
	
	_putchar(n + '0');
	for (n = 2; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf(" FizzBuzz");
		else if (n % 3 == 0)
			printf(" Fizz");
		else if (n % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", n);
	}
	_putchar('\n');
	return (0);
}
