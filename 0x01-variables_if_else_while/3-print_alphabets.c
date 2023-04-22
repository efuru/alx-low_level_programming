#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		putchar(t);
	}
	for (t = 'A'; t <= 'Z'; t++)
	{
		putchar(t);
	}

	putchar('\n');

	return (0);
}
