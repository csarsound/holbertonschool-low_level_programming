#include "main.h"
/**
 * _memset - fill memory constant
 * @s: space of memory
 * @b: byte
 * @n: memory area
 * Return: pointere to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
