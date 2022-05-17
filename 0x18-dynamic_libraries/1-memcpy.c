#include "main.h"

/**
 * _memcpy - function
 * @dest: destiny of copy
 * @src: grabe
 * @n: bytes
 * Return: to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
