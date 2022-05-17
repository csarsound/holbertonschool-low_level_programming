#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: first string
 * @src: second string
 * @n: letter w
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int i = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
