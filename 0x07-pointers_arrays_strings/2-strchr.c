#include "main.h"

/**
 * _strchr - function
 * @s: pointer
 * @c: letter to move
 * Return: valor next l
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0' ; s++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (0);
}
