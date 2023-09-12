#include "main.h"
/**
 * print_to_98 - detects the letters.
 * @n: the letter to start from.
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int c;

	if (n > 0)
	{
		for (c = n; c <= 98; c++)
		{
			_putchar(c + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
/*	else
	{
		for (c = n; c >= 98; c--)
                {
                        _putchar(c + '0');
                        _putchar(',');
                        _putchar(' ');
                }*/
}
