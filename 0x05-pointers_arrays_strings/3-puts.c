#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 *
 * @str: pointer to the string to print
 *
 */

void _puts(char *str)
{
	int i = '0';

	for (i = '0'; str[i] != '\0'; str[i]++)
	{
		putchar(str[i]);
	}
	
	putchar('\n');
}
