#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: return less than 0 if 1 is less or equal to s2
 * more than 1 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int e = 0;

	while (s1[e] == s2[e] && s1[e] && s2[e])/* cheacks if eqaul&not null*/
	{
		e++;
	}

	return (s1[e] - s2[e]); /* returns the difference */
}
