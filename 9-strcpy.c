#include <stdio.h>
#include <string.h>
/**
 * *_strcpy -  copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: parameter
 * @src: parameter
 * Return: the pointer to dst
 */
char *_strcpy(char *dest, char *src)
{
	int i, _strlen;

	_strlen = strlen(src);

	for (i = 0; i <= _strlen; i++)
		dest[i] = src[i];
	return (dest);
}
