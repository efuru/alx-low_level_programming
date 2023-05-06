#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase.
 * @s: string to modify
 * Return: resulting string
 */

char *string_toupper(char *s)
{
	int e = 0;

	for (e = 0; s[e] != '\0'; e++)
	{
		if (s[e] >= 'a' && s[e] <= 'z')
			s[e] = s[e] - 32;
	}

	return (s);

}
