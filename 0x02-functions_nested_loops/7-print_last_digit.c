#include "main.h"
/**
 * print_last_digit - prints last digit of given number.
 * @c: the letter to test.
 * Return: Always 0.
 */
int print_last_digit(int c)
{
	int s;
	if (c < 0)
		c = c * -1;
	s = c % 10;
	if (s < 0)
		s = s * -1;
	_putchar(s + '0');
	return (s);
}
