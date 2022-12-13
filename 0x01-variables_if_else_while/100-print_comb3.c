#include <stdio.h>

/**
 * main - program that prints all different combinations of two digits
 *
 * Description: program that prints all different combinations of two digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int e, f;

	e = 48;
	f = 48;

	while (e < 58)
	{
		f = e +1;
		while (f< 58)
		{
			putchar(e);
			putchar(f);

			if (e < 56 || f <57)
			{
				putchar(44);
				putchar(32);
			}
			f++;
		}

		e++;
	}
	putchar(10);
	return (0);
}
