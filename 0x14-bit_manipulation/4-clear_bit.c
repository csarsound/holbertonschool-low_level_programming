#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at given index
 * @n: Pointer
 * @index: Is the index Counter
 * Return: 1 if it worked, or -1 if an error occurrend
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int tmp = 1;

	if (index > 63)
		return (-1);
	while (index > 0)
	{
		tmp *= 2;
		index--;
	}
	*n &= ~(tmp);
	return (1);
}
