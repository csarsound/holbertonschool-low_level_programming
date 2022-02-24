#include "main.h"

/**
 *leet - paint and change the letter for numbers
 *@n: return ti main
 *Return: return to a
 */

char *leet(char *n)
{
	char s[] = "aAeEoOtTlL";
	char p[] = "4433007711";

	int i = 0;
	int j = 0;

	while (n[i] != '\0')
	{
		for (j = 0; s[j] != '\0' && n[i] != s[j]; j++)
			;
		if (j < 10)
		{
			n[i] = p[j];
		}
		i++;
	}
	return (n);
}
