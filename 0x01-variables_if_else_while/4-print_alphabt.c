#include <stdio.h>

/**
 * main -  program that prints the alphabet followed by new line
 *
 * Description: program that prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = 97;
	
	while (a < 123)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
		a++;
	}
	putchar(10);
	return (0);
}
