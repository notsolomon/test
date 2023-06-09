#include "main.h"
#include <ctype.h>

/**
 * _abs - prints the absolute value of a number
 * @n: integer to be to compute as absolute
 *
 * Return: absolute value
 */


int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
