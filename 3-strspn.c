#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: parameter
 * @accept: parameter
 *
 * Return: number of bytes in
 * the initial segment of swhich consist only
 * of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, matches;

	i = 0;
	matches = 0;

	while (s[i])
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				matches++;
				break;
			}

			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (matches);
		}

		i++;
	}

	return (matches);
}
