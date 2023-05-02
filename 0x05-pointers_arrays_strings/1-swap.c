#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: values to be swapped
 * @b: values to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
