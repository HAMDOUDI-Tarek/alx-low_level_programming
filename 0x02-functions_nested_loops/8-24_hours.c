#include "main.h"
/**
 * jack_bauer - writes minutes of the day.
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int h, m;
	h = 0;
	while (h <= 23)
	{
		m = 0;
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
