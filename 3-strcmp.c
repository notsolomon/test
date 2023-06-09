#include "main.h"
/**
 * _strcmp -  compares two strings
 * @s1: parameter
 * @s2: parameter
 * Return: int value less than
 * equal to, or greater than 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
		i++;

	if (*(s2 + i))
		return (*(s1 + i) - *(s2 + i));
	else
		return (0);
}
