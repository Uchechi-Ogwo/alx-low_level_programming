#include "main.h"

/**
 * print_times_table -  prints the n times table,
 * starting with 0
 * @n: number of times table
 * Return: void
 */

void print_times_table(int n)
{
	int f, g, h;

	if (n >= 0 && n <= 15)
	{
		for (f = 0; f <= n; f++)
		{
		for (g = 0, g <= n, g++)
		{
			h = g * f
			if (g == 0)
			{
				_putchar(h + '0');
			}
			else if (h < 10 && g != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(h + '0');
			}
			else if (h >= 10 && h < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((h / 10) + '0');
				_putchar((h % 10) + '0');
			}
			else if (h >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((h / 100) + '0');
				_putchar((((h / 10) % 10) + '0');

				_putchar((h % 10) + '0');
			}
		}
		}
		_putchar('\n');
	}
}
