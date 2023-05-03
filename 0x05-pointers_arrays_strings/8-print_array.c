#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: elements of the array to be printed
 * @n: number of array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int t = 0;

	for (t = 0; t < (n - 1); t++)
	{
		printf("%d, ", a[t]);
	}
	if (t == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
