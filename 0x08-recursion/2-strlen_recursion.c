#include "main.h"

/**
 * _strlen_recursion - main function, to print the length of a string
 *
 * @s: pointer to string
 *
 * Return: length of string.
 **/

int _strlen_recursion(char *s)
{
	if (*s == '\0')/*checks if s is in string*/
		return (0);
	return (_strlen_recursion(s + 1) + 1);/*calls func and does s recursion*/

}
