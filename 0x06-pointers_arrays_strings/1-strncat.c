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
	int e, f;

	e = 0;
	f = 0;

	while (dest[e] != '\0')
		e++;
	while (src[f] != src[n])
	{
		dest[e] = src[f];
		e++;
		f++;
	}

	dest[e] = '\0';
	return (dest);

}
