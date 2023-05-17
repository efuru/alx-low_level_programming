#include <stdio.h>

/**
 * my_func- this program allocates memors for itself
 * when the program leaves a function,
 * the memory that was automatically allocated
 * for the variable within the function is released.
 * Return: 0
 */
int my_func(void)
{
	char myname[15] = "Efuru Anthony"; /*automatic allocation for array of char*/

	printf("My name is %s\n", myname);
}
/**
 * main - returns my_func function
 * Return: 0
 */

int main(void)
{
	my_func();
	return (0);
}
