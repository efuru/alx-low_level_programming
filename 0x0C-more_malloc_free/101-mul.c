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
 * initialize_result - function initialize result
 * @len1: length of string
 * @len2: length of string two
 * Return: total length of both string
 */
char *initialize_result(int len1, int len2)
{
	int len_result;
	char *result;

	len_result = len1 + len2;
	result = calloc(len_result + 1, sizeof(char));
	memset(result, '0', len_result);
	return (result);
}

/**
 * long_multiplication - this function performs long multiplication
 * @num1: number to multiply
 * @num2: second number passed
 * @result: product to multiplication
 * Return: product of multiplication
 */

void long_multiplication(char *num1, char *num2, char *result)
{
	int len1, len2;
	int i, prod;
	int j, sum;

	len1 = strlen(num1);
	len2 = strlen(num2);

	reverse(num1, len1);
	reverse(num2, len2);
	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			prod = (num1[i] - '0') * (num2[j] - '0');
			sum = (result[i + j] - '0') + prod;
			result[i + j] = (sum % 10) + '0';
			result[i + j + 1] += sum / 10;
		}
	}
	reverse(result, len1 + len2);
}

/**
 * format_result - Function to format the result
 * @result: pointer to result
 * Return: 0, result in increment
 */

char *format_result(char *result)
{
	int len_result, i;

	len_result = strlen(result);
	i = 0;
	while (i < len_result && result[i] == '0')
		i++;
	if (i == len_result)
		return (0);
	return (result + i);
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
	int len1, len2;
	char *result;
	char *formatted_result;

	validate_arguments(argc, argv);
	num1 = argv[1];
	num2 = argv[2];
	len1 = strlen(num1);
	len2 = strlen(num2);
	result = initialize_result(len1, len2);
	long_multiplication(num1, num2, result);
	formatted_result = format_result(result);
	printf("%s\n", formatted_result);
	free(result);
	return (0);
}
