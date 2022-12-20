#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: pointer
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		++s;
	}
	s--;

	for (j = i; j > 0; j--)
	{
		_putchar(s[j]);
		s--;
	}
	_putchar('\n');
}
