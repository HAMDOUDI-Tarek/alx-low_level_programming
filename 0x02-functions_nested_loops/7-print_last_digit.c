#include "main.h"
/**
 * print_last_digit - prints last digit of given number.
 * @c: the letter to test.
 * Return: Always 0.
 */
int print_last_digit(int c)
{
	if (c < 0)
		c = c * -1;
	_putchar((c % 10) + '0');
}
