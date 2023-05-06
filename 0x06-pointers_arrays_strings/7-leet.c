/**
 * leet - function that encodes a string into 1337
 * @s: string array
 * Return: string array
 */

char *leet(char *s)
{
	int g, h;

	char *i = "aAeEoOtTlL"; /*letters to be replaced*/
	char *j = "4433007711"; /*numbers replacing letters*/

	for (g = 0; s[g] != '\0'; g++)
	{
		for (h = 0; h < 10; h++) /* iterates through i & j */
		{
			if (s[g] == i[h]) /*checks if s[g] = a[h]*/
			{
				s[g] = j[h]; /*assigns new val */
			}
		}
	}

	return (s);
}
