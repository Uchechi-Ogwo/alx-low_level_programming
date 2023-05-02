#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 * Return: o
 */

void print_rev(char *s)
{
	int longu = 0;
	int v;

	while (*s != '\0')
	{
		longu++;
		s++;
	}
	s--;
	for (v = longu; v > 0; v--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
