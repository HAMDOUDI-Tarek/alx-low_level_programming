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
		for (; n <= 9; n++)
			_putchar(n + '0');
		n = 0;
		for (; n <= 4; n++)
		{
			putchar(1 + '0');
			putchar(n + '0');
		}
		_putchar('\n');
		c++;
		n = 0;
	}
}
