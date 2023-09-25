#include "main.h"
/**
 * print_last_digit - prints last digit of given number.
 * @c: the letter to test.
 * Return: Always 0.
 */
int print_last_digit(int c)
{
	if (c >= 0)
	{
		_putchar(c % 10 + '0');
		return (c % 10);
	}
	_putchar(c * -1 % 10 + '0');
	return (c * -1 % 10);
}
