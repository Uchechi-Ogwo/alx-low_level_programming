#include "main.h"

/**
 * puts2 - prints every other character of a string, startin
 * with the first character, followed by a new line.
 * @str: input
 * Return: void
 */

void puts2(char *str)
{
	int t = 0;

	while (str[t] != '\0')
	{
		if (t % 2 == 0)
		{
			_putchar(str[t]);
		}
		t++;
	}
	_putchar('\n');
}
