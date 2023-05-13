#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum coints to make change for a given amount of money
 * @argc: argument count
 * @argv: arrays of pointer to strings to arguments
 * Return: number of coins or 0
 */

int main(int argc, char *argv[])
{
	int cents;
	int cash = 0;
	int val[] = {25, 10, 5, 2, 1};
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);/*convert firt arg from strin to int*/

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= val[i])
		{
			cents -= val[i];
			cash++;
		}
	}

	printf("%d\n", cash);
	return (0);
}
