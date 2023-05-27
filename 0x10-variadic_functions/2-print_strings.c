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
	va_list lists;
	unsigned int index;
	char *str;

	va_start(lists, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(lists, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(lists);
}
