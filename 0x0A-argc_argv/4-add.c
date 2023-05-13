#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * check_ch_for_num - this function checks a char for numbers
 * @ch: string to check
 * Return: 1 if it is digit 0 otherwise
 */

int check_ch_for_num(char *ch)
{
	int e, number, length;

	e = 0;
	number = 0;
	length = strlen(ch);/*sets value of length to ch string*/

	while (e < length)/*e iterates through length, e is index*/
	{
		if (ch[e] < '0' || ch[e] > '9')/*check if ch[e] is not digit*/
		{
			return (-1);/*to indicate string is not a digit*/
		}
		else
			/*convert char digits to its number values*/
			number = number * 10 + (ch[e] - '0');
		e++;
	}

	return (number);
}

/**
 * main - this function adds positive numbers
 * @argc: argument count
 * @argv: arrays of strings counted
 * Return: 0 if no number is passed, 1 if not digit
 */

int main(int argc, char *argv[])
{
	int e, number, sum;

	sum = 0;

	for (e = 1; e < argc; e++)
	{
		number = check_ch_for_num(argv[e]);/*check_ch_for_num function call*/
		if (number == -1)
		{
			printf("Error\n");
			return (1);
		}

		sum += number;
	}
	printf("%d\n", sum);
	return (0);
}
