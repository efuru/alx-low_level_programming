#include <stdio.h>

/**
 * main - program prints all possible different combinations of three digits
 *
 * Description: Program prints all possible combinations of three digits
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int e, f, j;

	e = 48;

	while (e < 58)
	{
		f = e + 1;

		while (f < 58)
		{
			j = f + 1;

			while (j < 58)
			{
				putchar(e);
				putchar(f);
				putchar(j);

				if (e < 55 || f < 56 || j < 57)
				{
					putchar(44);
					putchar(32);
				}
				j++;
			}
			f++;
		}
		e++;
	}
	putchar(10);

	return (0);

}
