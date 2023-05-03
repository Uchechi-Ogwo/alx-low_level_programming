#include "main.h"

/**
 * *_strcpy -  a function that copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		*(dest + a) = *(src + a);
	}
	*(dest + a) = '\0';
	return (dest);
}
