#include <stdio.h>

/**
 *
 * main - program prints the alphabet in lowercase
 *
 * Description: this program prints the alphabet in
 * lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int n = 97;
	
	while (n < 123)
	{
		putchar(n);
		n++;
	}
	
	putchar(10);
	
	return (0);
}
