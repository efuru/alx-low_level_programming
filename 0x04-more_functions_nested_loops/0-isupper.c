#include "main.h"

/**
 * _isupper - This function checks if c uppercase character
 *
 * @c: integer to cheack
 *
 * Return; 1 if c is uppercase 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
