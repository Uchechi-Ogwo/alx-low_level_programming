#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int length, n, t;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 0)
	{
		for (t = length / 2; str[t] != '\0'; t++)
		{
			_putchar(str[t]);
		}
	}
	else if (length % 2)
	{
		for (n = (length - 1) / 2; n < length - 1; t++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}

