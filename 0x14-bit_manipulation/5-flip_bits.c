
#include "main.h"

/**
 * flip_bits - Determine the number bits to flip
 * @n: first int value
 * @m: value to convert to
 * Return: number of bits to flip to change from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
