#include <stdio.h>
#include <unistd.h>

/**
 * main - print qoute
 *
 * Description: a qoute by Dora Korpar
 *
 * Return: 1 always (sucess)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
