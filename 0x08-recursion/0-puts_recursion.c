#include "main.h"

/**
 * _puts_recursion - Main function
 *
 * @s: pointer to string and parameter passed
 *
 * return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')/*checks if *s is = to the end of string*/
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);/*function is called*/
}
