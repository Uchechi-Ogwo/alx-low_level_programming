#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @x: input value
 * Return: x value
 */

char *leet(char *x)
{
	int a, i;
	char st1[] = "aAeEoOtTlL";
	char st2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (i = 0; i < 10; i++)
		{
			if (n[a] == st1[i])
			{
				n[a] = st2[i];
			}
		}
	}
	return (x);
}

