#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: integer
 * ReturnL 1 when c is a letter
 * 0 othwrwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
