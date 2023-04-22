#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program assigns random number to variable n each time I executed
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, e;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	e = n % 10;

	if (e > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", e, n);
	}
	else if (e == 0)
	{
		printf("Last digit of %d is %d and is 0\n", e, n);
	}
	else if (n < 6 && e != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", e, n);
	}
	return (0);
}
