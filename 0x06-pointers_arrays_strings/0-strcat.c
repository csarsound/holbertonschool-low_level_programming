#include "main.h"

/**
 * _strcat - concatenate the strings
 * @dest: first string
 * @src: second string
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int j = 0;
	int i = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
