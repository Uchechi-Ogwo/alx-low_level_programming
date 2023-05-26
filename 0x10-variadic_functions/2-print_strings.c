#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * @..: a variable number of strings to be printed
 * Return: no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_strings;
	unsigned int i;
	char *str;

	va_start(my_strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(my_strings, char *);
		if (str == NULL)
			printf("NULL");
		else
			print("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(my_strings);
}
