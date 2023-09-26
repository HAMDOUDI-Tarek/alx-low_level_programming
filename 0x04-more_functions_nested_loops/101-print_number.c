#include "main.h"
/**
 * print_number - display the given number.
 * @n: number to display.
 */
void print_number(int n)
{
	unsigned int temp, div, count = 1;

	if  (n < 0)
	{
		temp = n * -1;
		_putchar('-');
	}

	else
		temp = n;
	div = temp;
	while (div > 9)
	{
		div /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
		_putchar(((temp / count) % 10) + '0');
}
