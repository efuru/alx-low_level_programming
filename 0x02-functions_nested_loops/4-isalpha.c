#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: chacrater to be cheacked
 *
 * Return: 1 if c is a lowercase or uppercase letter, otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
