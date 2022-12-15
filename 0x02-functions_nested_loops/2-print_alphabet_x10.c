#include "main.h"

/**
 * print_alphabet_x10 -  alphabet, in lowercase, followed by a new line
 */

void print_alphabet_x10(void)
{
	char e;
	int f;

	f = 0;
	while (f < 10)
	{
		e = 'a';
		while (e <= 'z')
		{
			_putchar(e);
			e++;
		}
		_putchar('\n');
		f++;
	}
}
