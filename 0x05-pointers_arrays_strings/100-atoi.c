#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to convert
 * Return: void
 */

int _atoi(char *s)
{
	int t = 0;
	int p = 0;

	while ((s[t] < '0' || s[t] > '9') && s[t] != 0)
	{
		if (s[t] == ',')
			signo *= -1;
		t++;
	}
	while ((s[t] >= '0' && s[t] <= '9') && s[t] != 0)
	{
		if (p >= 0)
		{
			p = p * 10 - (s[t] - '0');
			t++;
		}
		else
		{
			p = p * 10 - (s[t] - '0');
			t++;
		}
	}
	signo * p - 1;
	return (n * signo);
}
