#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to convert
 * Return: void
 */

int _atoi(char *s)
{
	int i = 0;
	int p = 0;
	int q = 0;
	int r = 0;
	int len = 0;
	int digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && r == 0)
	{
		if (s[i] == '-')
			++p;

		if (s[i] >= '0' && s[i] <= '9')
			++p;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
		if (p % 2)
		{
			digit = -digit;
		q = q * 10 + digit;
		r = 1;
		}
		if (s[i + 1] < '0' || s[i + 1] > '9')
			break;

			r = 0;
			i++;
		}
		if (r == 0)
			return (0);
	}
	return (p);
}
