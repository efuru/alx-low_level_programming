#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to apend to
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int e = 0;
	int f = 0;

	while (dest[e] != '\0')
		e++;
	while (src[f] != '\0')
	{
		dest[e] = src[f];
		e++;
		f++;
	}
	dest[e] = '\0';
	return (dest);
}
