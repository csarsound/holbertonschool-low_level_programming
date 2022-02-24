#include "main.h"

/**
 * cap_string - capitalizes all words
 * @n: turn string
 * Return: n string
 */

char *cap_string(char *n)
{
	int i = 0;
	int j;
	char spc[] = {' ', '\t', '\n', ',', ';', '.', '!', '"', '(', ')', '{', '}'};

	if (n[0] >= 'a' && n[0] <= 'z')
	{
		n[0] -= 32;
	}
	while (n[i] != '\0')
	{
		for (j = 0; spc[j] != '\0'; j++)
		{
			if (n[i - 1] == spc[j] && n[i] <= 122 && n[i] >= 97)
				n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}
