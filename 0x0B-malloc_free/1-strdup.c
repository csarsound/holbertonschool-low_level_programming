#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicate a string
 *@str: string
 *
 *Return: pointer to newely allocated space in memory
 */

char *_strdup(char *str)
{
	char *str2;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		;
	}
	i++;
	str2 = malloc(sizeof(char) * i);

	if (str2 == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
		str2[j] = str[j];

	return (str2);
}
