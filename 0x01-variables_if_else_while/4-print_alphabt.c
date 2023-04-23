#include <stdio.h>

/**
 * main - This  program that prints the alphabet in lowercase ina  new line
 *
 * Description: program that prints the alphabet in lowercase, with a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char f;

	for (f = 'a'; f <= 'z'; f++)
	{
		if (f != 'q' && f != 'e')
		{
			putchar(f);
		}
	}
	putchar('\n');

	return (0);
}
