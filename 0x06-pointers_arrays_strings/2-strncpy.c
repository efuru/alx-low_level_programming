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

	while (e < n && src[e] != '\0')
	{
		dest[e] = src[e]; /*assigns e in src to e in dest */
		e++;
	}

	while (e < n)
	{
		dest[e] = '\0'; /* assigns null char to the e-th elemnet of dest*/
		e++;
	}

	return (dest);
}
