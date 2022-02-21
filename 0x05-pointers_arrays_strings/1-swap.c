#include "main.h"

/**
 * swap_int - swap integers
 * @a: first integers 98
 * @b: second integers 42
 * Return: swap_int
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
