#include "main.h"
/**
 * print_last_digit - prints last digit of given number.
 * @c: the letter to test.
 * Return: Always 0.
 */
int print_last_digit(int c)
{
	long int a;

	a = c;
	if (a >= 0)
	{
		_putchar(a % 10 + '0');
		return (a % 10);
	}
	_putchar(a * -1 % 10 + '0');
	return (a * -1 % 10);
}
