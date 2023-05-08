#include "main.h"

/**
 * *_memset - main function
 *
 * @s: pionter to bytes of memory area
 * @n: size of memory
 * @b: constant byte
 *
 * Description: This function that fills memory with a constant byte
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int e;

	while (e < n)
	{
		s[e] = b;
		e++;
	}

	return (s);
}
