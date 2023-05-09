#include "main.h"
#include <stddef.h>

/**
 * _strstr - Main function
 *
 * @haystack: pointer to var
 * @needle: pointer to var
 *
 * Return: haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *a = haystack;
	char *e = needle;

	while (*a)
	{
		a = haystack;
		e = needle; /*set pointer to start of string*/
		while (*e)
		{
			if (*a == *e)
			{
				a++;
				e++;
			}

			else
				break;
		}

		if (*e == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
