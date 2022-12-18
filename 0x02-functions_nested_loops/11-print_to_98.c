#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 *
 * @n: starting integer
 *
 * Description:  prints all natural numbers from n to 98
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	if (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	printf("98\n");
}


