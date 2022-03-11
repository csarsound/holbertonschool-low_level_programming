#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - fonction concatenate strings
 *@s1: string One
 *@s2: string Two
 *@n: integer
 *Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *poi;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	poi = malloc(sizeof(char) * (len + 1));

	if (poi == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		poi[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		poi[len++] = s2[index];

	poi[len] = '\0';

	return (poi);
}
