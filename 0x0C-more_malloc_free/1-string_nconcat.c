#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - this function concatenates two strings
 * @s1: string to be joined
 * @s2: second string to be joined
 * @n: parameter passed
 * Return: NULL if function fails, otherwise return total of both strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *result;
	unsigned int i;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')/*if len1 in s1 is != null terminator*/
			len1++; /*increment it*/
	}
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}
	if (n >= len2)/*check if n is > len2, if it is use len2*/
		n = len2;

	result = malloc(sizeof(char) * (len1 + n + 1));

	if (result == NULL)/*check if s1 & s2 are null*/
		return (NULL);
	for (i = 0; i < len1; i++)/*loop through s1*/
		result[i] = s1[i];

	for (; i < len1 + n; i++)
		result[i] = s2[i - len1];/*cp char from len1 into results*/
	result[i] = '\0';

	return (result);
}
