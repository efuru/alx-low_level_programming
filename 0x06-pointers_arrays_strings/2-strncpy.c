#include "main.h"

/**
 * _strncpy -  copies a string
 * @dest: string  sorce to copy
 * @src: destination source of string to be copied
 * @n: n bytes to copy
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int e = 0;

	while (src[e] != '\0' && e < n)
	{
		dest[e] = src[e];
		e++;
	}
	while (e < n)
	{
		dest[e] = '\0';
		e++;
	}
	return (dest);
}
