#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * Description: program should print a number, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%i\n", argc - 1);

return (0);
}
