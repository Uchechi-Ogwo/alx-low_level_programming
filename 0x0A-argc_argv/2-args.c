#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 * Description: All arguments should be printed, including the
 * first oneAll arguments should be printed, including the first one.
 * Only print one argument per line, ending with a new line.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{

/*Declaring variables*/
int count = 0;

if (argc > 0)
{
/*WHILE -Print each arguments*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
