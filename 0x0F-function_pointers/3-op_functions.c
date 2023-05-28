#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - this function returns the sum of a and b!
 * @a: integer to add
 * @b: second integer to add
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - this function returns the difference of a and b!
 * @a: first integer
 * @b: second integer
 * Return: the remainder of a minus b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - thid function returns the product of a by b!
 * @a: first multiple
 * @b: second multiple
 * Return: the product of a by b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - this function return the division result of a by b
 * @a: first integer
 * @b: second integer
 * Return: the remainder of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - this function returns the remainder of the division of a by b
 * @a: first integer
 * @b: second intger
 * Return: remainder from the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
