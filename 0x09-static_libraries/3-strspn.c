#include "main.h"

/**
 * _strspn - Mian function that gets length of a prefix substring
 *
 * @s: pointer to s
 * @accept: pointer to accept
 *
 * Return: tracker
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, tracker = 0;

	while (s[i])/*iterates over s string */
	{
		for (j = 0; accept[j]; j++)/*iterates over accept string */
		{
			if (s[i] == accept[j])/*if curr char of s accept is =*/
			{
				tracker++;/*kps trk ch in s that has ch of acpt*/
			}
		}

		if (tracker < i)
		{
			break;
		}

		i++;
	}

	return (tracker);
}
