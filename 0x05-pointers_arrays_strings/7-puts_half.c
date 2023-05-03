#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int len, n, t;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (t = len / 2; str[t] != '\0'; t++)
		{
			_putchar(str[t]);
		}
	}
	else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; t++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}

