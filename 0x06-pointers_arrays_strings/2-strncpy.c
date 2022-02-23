#include "main.h"

/**
 * _strncpy - copy of string to string
 * @dest: pointer destination
 * @src: source pointer
 * @n: determinate if end of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = dest[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
