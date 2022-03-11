#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array
 *@nmemb: integer One
 *@size: integer Two
 *Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == 0)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		c[i] = 0;

	return (c);
}
