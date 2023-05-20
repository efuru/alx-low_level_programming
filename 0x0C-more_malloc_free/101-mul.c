#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
#include <string.h>

/**
 * reverse - this function reserve a string
 * @str: string
 * @len: length of string
 * Return: reversed string
 */

void reverse(char *str, int len)
{
	int i = 0, j = len - 1;
	char temp;

	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}
/**
 * validate_arguments - this function multiples two positive integers
 * @argc: argument count
 * @argv: arguments value in  array
 * Return: 0 for success, otherwise 98 if program fails
 */

void validate_arguments(int argc, char *argv[])
{
	char *num1, *num2;
	int i;

	if (argc != 3)/*checks if user passed 2 arguments*/
	{
		printf("Error\n");/*if arguement passed is < or > 3*/
		exit(98);/*exit stutus*/
	}
	num1 = argv[1];/*pointer to first argv paased by user*/
	num2 = argv[2];/*num2 is assigned to argv2 so it can point 2nd arg*/

	for (i = 0; num1[i]; i++)/*num1[i] chck if current char is none z0ro*/
	{
		if (!isdigit(num1[i]))/*check if i-th char is decimal digit*/
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; num2[i]; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
}

/**
 * long_multiplication - this function performs long multiplication
 * @num1: number to multiply
 * @num2: second number passed
 * Return: product of multiplication
 */

char *long_multiplication(char *num1, char *num2)
{
	int len1, len2;
	int i, prod;
	int j, sum;
	int len_result;
	char *sult;

	len1 = strlen(num1);
	len2 = strlen(num2);
	len_result = len1 + len2;

	sult = calloc(len_result + 1, sizeof(char));
	memset(sult, '0', len_result);/*alloc memory*/

	/*reverse input strings*/
	reverse(num1, len1);
	reverse(num2, len2);

	/*perform long mul*/
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			prod = (num1[i] - '0') * (num2[j] - '0');
			sum = (sult[i + j] - '0') + prod;
			sult[i + j] = (sum % 10) + '0';
			sult[i + j + 1] += sum / 10;
		}
	}
	reverse(sult, len1 + len2);/*reverse result of strings*/

	i = 0;
	while (i < len_result && sult[i] == '0')
		i++;
	if (i == len_result)
		return (0);
	return (sult + i);
}

/**
 * main - Main function
 * @argc: arguments count
 * @argv: argumemt value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;
	char *result;

	validate_arguments(argc, argv);
	num1 = argv[1];
	num2 = argv[2];
	result = long_multiplication(num1, num2);
	printf("%s\n", result);
	free(result);
	return (0);
}
