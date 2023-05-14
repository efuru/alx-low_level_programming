#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Main function
 *
 * @s: pointer to s
 * @accept: pointer to accept
 *
 * Return: s byte in accept, NULL if none matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)/*s-th byte of *s*/
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == *s)/*checks for *s in accept*/
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
