#include "main.h"

/**
 * _print_rev_recursion - main function, prints reverse recursion
 *
 * @s: paremeter and pointer to string
 *
 * return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')/*checks if s is less than or not in sting*/
	{
		_print_rev_recursion(s + 1);/*calls func & factorise*/
		_putchar(*s);
	}
}
