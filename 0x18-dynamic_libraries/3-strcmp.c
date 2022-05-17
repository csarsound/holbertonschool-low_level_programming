#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: first string
 * @s2: second string
 * Return: Compare two string
 */

int _strcmp(char *s1, char *s2)
{
	int j = 0;

	while (s1[j] == s2[j] && s1[j] != '\0' && s2[j] != '\0')
	{
		j++;
	}
	return ((s1[j] + '0') - (s2[j] + '0'));
}
