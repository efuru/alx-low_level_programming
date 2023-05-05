#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to apend to
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++; /* iterating from start of dest to null treminator */
	}
	k = 0;
	while (src[k] != '\0')
	{
		dest[i] = src[k]; /* appends src to the end of dest */
		i++;
		k++; /* iterates from end of dest to null terminator */
	}

	dest[i] = '\0';
	return (dest);

}

