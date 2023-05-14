#include "main.h"

/**
 * _isupper -  checks for uppercase characte
 *
 * @c: character that is checked
 *
 * Return:1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}
