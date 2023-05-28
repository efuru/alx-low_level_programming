#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - the main function
 * @argc: argumeant count
 * @argv: array of command-line arguments
 * Return: 0 on success, 98-100 on error
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op_func)(int, int);/*func pointer*/

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((op_func == op_div || op_func == op_mod) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

		printf("%d\n", op_func(num1, num2));
		return (0);
}
