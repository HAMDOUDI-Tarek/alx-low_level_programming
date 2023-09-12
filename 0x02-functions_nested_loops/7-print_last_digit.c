#include "main.h"
/**
 * print_last_digit - prints last digit of given number.
 * @c: the letter to test.
 * Return: Always 0.
 */
int print_last_digit(int c)
{
	int a;
	if (c < 0)
		c = -c;
	a = c % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
