#include <stdio.h>

/**
 * main - program prints all possible combinations of two two-digit numbers
 *
 * Description: prints all possible different combinations of two-digit numbers
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int e, f, g, h;

	e = 48;

	while (e < 58)
	{
		f = e + 1;

		while (f < 58)
		{
			g = f + 1;

			while (g < 58)
			{
				h = g + 1;

				while (h < 58)
				{
					putchar(e);
					putchar(f);
					putchar(32);
					putchar(g);
					putchar(h);

					if (e < 57 || f < 56 || g < 57 || h < 57)
					{
						putchar(44);
						putchar(32);
					}
					h++;
				}
				g++;
			}
			f++;
		}
		e++;
	}
	putchar(10);

	return (0);
}
