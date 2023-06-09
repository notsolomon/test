#include <stdio.h>
#include <string.h>

/**
 * num_starts - find index where a digit is first found in string
 * @s: string to search
 * Return: integer index where digit is first found
 */

int num_starts(char *s)
{
	int i, _strlen;

	_strlen = strlen(s);

	for (i = 0; i < _strlen; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (i);
	}
	return (-1); /* return -1 if no digits found */
}

/**
 * find_sign - determine if integer is negative
 * @s: integer
 * Return: integer 1 or -1
 */
int find_sign(char *s)
{
	int negatives = 0, i = 0, sign = 1;

	while (i < (num_starts(s)))
	{
		if (s[i++] == '-')
			negatives++;
	}

	if (negatives % 2 != 0)
		sign = -1;

	return (sign);
}

/**
 * _atoi -  convert a string to an integer
 * @s: parameter
 * Return: integer when successful, 0 otherwise
 */
int _atoi(char *s)
{

	int digit_starts = (num_starts(s));
	int sign, _strlen;
	int digits_to_print = 0;
	int t = 1, i;
	unsigned int num = 0;
	int digit = (num_starts(s));

	if (digit_starts < 0) /* if no digits found, exit program */
		return (0);

	_strlen = strlen(s);
	sign = find_sign(s);

	while ((s[digit_starts] >= '0' && s[digit_starts] <= '9')
		&& (digit_starts <= _strlen)) /* count digits to print */
	{
		digits_to_print += 1;
		digit_starts++;
	}

	i = 1;

	while (i < digits_to_print) /* find powers of ten to multiply places */
	{
		t *= 10;
		i++;
	}

	for (i = digit; i < (digit + digits_to_print); i++) /* calculate num */
	{
		num += (s[i] - '0') * t;
		t /= 10;
	}

	return (num * sign);
}
