#include "main.h"
#define NULL 0

/**
 * *_strpbrk - searches a string for
 * any of a set of bytes
 * @s: String parameter
 * @accept: String parameter
 *
 * Return: pointer to the byte in s
 * that matches one of the bytes in accept.
 * Null otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				/*Set pointer to first occurence*/
				s = &s[i];
				return (s);
			}
		}

		i++;
	}

	return (NULL);
}
