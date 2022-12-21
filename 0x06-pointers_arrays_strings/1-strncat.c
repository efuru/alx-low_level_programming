#include "main.h"

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: string to append to
 * @src: string to append to
 * @n: append to n number of bytes
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int e = 0;
	int a = 0;

	while (dest[e] != '\0')
		e++;
	while (src[a] != src[n])
	{
		dest[e] = src[a];
		a++;
		e++;
	}
	dest[e] = '\0';
	return (dest);
}
