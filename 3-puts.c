#include <stdio.h>
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: parameter
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
