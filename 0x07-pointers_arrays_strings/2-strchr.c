#include "main.h"
#include <stddef.h>

/**
 * *_strchr - this function locates a character in a string
 *
 * @s: the string
 * @c: character in the string
 *
 * Return: a pointer of character c or returns NULL if character not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')/*condition s to be less than null char*/
	{
		if (*s == c)/*checks if c is in s*/
		{
			return (s);
		}

		s++;
	}

	return (NULL);
}
