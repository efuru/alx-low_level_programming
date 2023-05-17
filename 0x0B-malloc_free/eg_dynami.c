#include <stdio.h>
#include <stdlib.h>

/**
 * main - allocates memory dynamically
 * Return: 1 if memory is NULL else returns 0 for success
 */
int main(void)
{
	int *alloc = malloc(sizeof(int)); /*dynamic alloc of memory of int*/

	if (alloc == NULL)/*checks if successful by comparing alloc to null*/
	{
		printf("Memery allocation faided\n");
		return (1);/*if it is null, program didnt succeed*/
	}
	*alloc == 10;/*continue & assigns ten to memory pointed to by alloc*/
	printf("*alloc = %d\n", *alloc);

	free(alloc);/*frees allocation after using it*/
	return (0);
}
