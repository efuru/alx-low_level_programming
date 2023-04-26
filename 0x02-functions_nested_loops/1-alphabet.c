#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char e;

	for (e = 'a'; e <= 'z'; e++)
	{
		_putchar(e);
	}

	_putchar('\n');
}
