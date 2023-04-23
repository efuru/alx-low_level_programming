#include <stdio.h>

/**
 * main - This program prints the lowercase alphabet in reverse
 *
 * Description:  This program prints the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char e;

	for (e = 'z'; e > 'a'; e--)
	{
		putchar(e);
	}

	putchar('\n');

	return (0);
}
