#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int l, m, n;

	l = strlen(str);
	if (l % 2 == 1)
		m = l / 2 + 1;
	else
		m = l / 2;
	for (n = m; n < l; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');

}
