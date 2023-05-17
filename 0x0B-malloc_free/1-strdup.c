#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this function returns a pointer to newly allocated strings
 * @str: the copy of the string given as a parameter
 * Return: NULL if str= NULL, otherwise pointer to duplicated memory
 * or it returns NULL if insuficiant memory is availabvble
 */

char *_strdup(char *str)
{
	char *new_string;
	int length, j;

	if (str == NULL)/*checks if the entire string even exits*/
	{
		return (NULL);/*if it is not return null*/
	}

	length = 0;
	while (str[length] != '\0')/*length-th in str is != null terminator*/
	{
		length++;
	}

	new_string = malloc((length + 1) * sizeof(char));
	if (new_string == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < length; j++)
	{
		new_string[j] = str[j];/*initialize j in new_string to j str*/
	}
	new_string[length] = '\0';/*add null terminator at end of new_string*/
	return (new_string);
}

