#include "main.h"
/**
 * more_numbers - displays the numbers from 0 to 14.
 */
void more_numbers(void)
{
	int a, i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
