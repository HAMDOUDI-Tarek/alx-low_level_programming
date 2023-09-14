#include "main.h"
/**
 * more_numbers - displays the numbers from 0 to 14.
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n = 0, c = 1;
	
	while (c <= 10)
	{
		for (; n <= 14; n++)
		{
			if (n < 10)
				_putchar(n + '0');
			else 
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
		n = 0;
		c++;
	}
}
