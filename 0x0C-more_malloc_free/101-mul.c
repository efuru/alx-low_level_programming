#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - this function multiples two positive integers
 * @argc: argument count
 * @argv: arguments value in  array
 * Return: 0 for success, otherwise 98 if program fails
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int i;
	int result;

	if (argc != 3)/*checks if user passed 2 arguments*/
	{
		printf("Error\n");/*if arguement passed is < or > 3*/
		return (98);/*exit stutus*/
	}
	num1 = argv[1];/*pointer to first argv paased by user*/
	num2 = argv[2];/*num2 is assigned to argv2 so it can point 2nd arg*/

	for (i = 0; num1[i]; i++)/*num1[i] chck if current char is none z0ro*/
	{
		if (!isdigit(num1[i]))/*check if i-th char is decimal digit*/
		{
			printf("Error\n");
			return (98);
		}
	}
	for (i = 0; num2[i]; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	result = atoi(num1) * atoi(num2);/*convrt string to int put in result*/
	printf("%d\n", result);
	return (0);
}
