#include "main.h"
/**
 * print_numbers - displays the numbers.
 * Return: Always 0.
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
		_putchar(n + '0');
	_putchar('\n');
}
