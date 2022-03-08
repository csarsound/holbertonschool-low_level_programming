#include "main.h"

/**
 * _strpbrk - function
 * @s: sample
 * @accept: route
 * Return: i-value
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	s = 0;
	return (0);
}
