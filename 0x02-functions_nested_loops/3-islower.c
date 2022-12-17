#include "main.h"

/**
 * _islower - cheacks for the lowercase character
 *
 * @c: character to check
 *
 * Return: 1 if c is lowercase, otherwise 0
 */

int _islower(int c)
{
	return ((c >= 'a') && (c <= 'z'));
}
