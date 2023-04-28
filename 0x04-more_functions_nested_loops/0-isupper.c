#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: the number to be checked
 * Return: 1 if is an uppercase character, 0 in other case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
		return (0);
}
