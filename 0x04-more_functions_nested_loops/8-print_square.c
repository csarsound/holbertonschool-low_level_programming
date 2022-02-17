#include "main.h"
/**
 * print_square - Draws a square
 * @size: Parameter of size
 * Return: 0 value
 */

void print_square(int size)
{
	int x;
	int y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
