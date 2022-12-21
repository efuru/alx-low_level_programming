#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 * Return: resulting strig
 */

char *cap_string(char *s)
{
	int e, f;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (e = 0; s[e] != '\0'; e++)

	{
		if (e == 0 && s[e] >= 'a' && s[e] <= 'z')
			s[e] = 32;

			for (f = 0; f < 13; f++)
			{
				if (s[e] == spe[f])
				{
					if (s[e + 1] >= 'a' && s[e + 1] <= 'z')
					{
						s[e + 1] -= 32;
					}
				}
			}
	}
	return (s);
}
