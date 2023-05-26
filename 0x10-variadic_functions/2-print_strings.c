#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * @..: a variable number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "nil";
		if (!separator)
			print("%s", str);
		else if (separator && i == 0)
			print("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(list);
}
