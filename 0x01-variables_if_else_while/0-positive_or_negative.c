#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determine if number is positive or nagative
 *
 * description: program will assign a random number to variable
 *
 * return (0) succesee always
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is nagative\n", n);
	else
		printf("%d is positive\n", n);
		
	return (0);
}
