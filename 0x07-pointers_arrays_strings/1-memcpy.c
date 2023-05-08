#include "main.h"

/**
 * *_memcpy - This function copies memory area
 *
 * @src: source memory area
 * @dest: destunation memory area
 * @n: unsigned int bytes of memory to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a]; /*access a-th byte in dest & src*/
		a++; /*iterates from 0 - n*/

	}

	return (dest);
}
