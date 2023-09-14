#include "main.h"
/**
 * more_numbers - displays the numbers from 0 to 14.
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n, c;

	c = 0;
	while (c < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			n++;
		}
	_putchar('\n');
	c++;
	}
}
