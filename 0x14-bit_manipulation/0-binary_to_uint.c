#include "main.h"
/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b: Is a pointer to converter
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int num = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			num = (num * 2) + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}

	return (num);
}
