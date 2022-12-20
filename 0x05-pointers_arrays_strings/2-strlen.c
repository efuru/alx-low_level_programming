#include "main.h"

/**
 * _strlen -  returns the length of a string
 *
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int e;

	e = 0;

	while (s[e] != '\0')
	{
		e++;
	}
	return (e);
}
