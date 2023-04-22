#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
