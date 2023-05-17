#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *str_concat - this function concatenates two strings
 * @s1: string to be concatenated
 * @s2: second string to be concatenated
 * Return: Null on failure, otherwise the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int length1, length2, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";/*if s1 0r s2 is null it's empty strings respectively*/
	}
	/*calculate length of each strings*/
	length1 = 0;
	while (s1[length1] != '\0')/*lentgh1-th in s1 != to null terminator*/
	{
		length1++;
	}
	length2 = 0;
	while (s2[length2] != '\0')
	{
		length2++;
	}
	new_string = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < length1; j++) /*loop through all length using j index*/
	{
		new_string[j] = s1[j];/*copy content of s1 to new_string*/
	}
	for (j = 0; j < length2; j++)
	{
		new_string[length1 + j] = s2[j];/*add s1, s2 into new string*/
	}
	new_string[length1 + length2] = '\0';/*null terminator at end array*/
	return (new_string);/*returns pointer to new string*/
}
