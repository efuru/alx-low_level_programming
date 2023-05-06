#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 * Return: resulting strig
 */

char *cap_string(char *s)
{
	int j = 1;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}

	for (; s[j]; j++)
	{
		if ((s[j - 1] == ' ' || s[j - 1] == '\t' || s[j - 1] == '\n'
		|| s[j - 1] == ',' || s[j - 1] == ';' || s[j - 1] == '.'
		|| s[j - 1] == '!' || s[j - 1] == '"' || s[j - 1] == '('
		|| s[j - 1] == ')' || s[j - 1] == '{' || s[j - 1] == '?'
		|| s[j - 1] == '}') && (s[j] >= 'a' && s[j] <= 'z'))
		{
			s[j] = s[j] - 32;
		}

	}

	return (s);
}
