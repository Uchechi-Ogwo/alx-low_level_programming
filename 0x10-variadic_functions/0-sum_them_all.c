#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 * Return: sum of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int result = 0;

	if (n == 0)
		return (0);
	va_start(list, n);

	for (i = 0; i < n; i++)
		result += va_arg(list, int);

	va_end(list);

	return (result);
}