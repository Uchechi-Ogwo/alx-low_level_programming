#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords for the program
 * Return: always 0
 */

int main(void)
{
	int t, sum, n;
	int pass[100];

	sum = 0;

	srand(time(NULL));

	for (t = 0; t < 100; t++)
	{
		pass[t] = rand() % 78;
		sum += (pass[t] + '0');
		putchar(pass[t] + '0');
	}
	if ((2772 - sum) - '0' < 78)
	{
		n = 2772 - sum - '0';
		sum += n;
		putchar(n + '0');
	}
	return (0);
}
