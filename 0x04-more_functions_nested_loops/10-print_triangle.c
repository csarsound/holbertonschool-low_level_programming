#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: this is a size
 * Return: void
 */

void print_triangle(int size)
{
	int t;
	int l;
	int x = size;

	if (size > 0)
		for (t = 0; t < size; t++)
		{
			x--;
			for (l = 0; l < size; l++)
			{
				if (l < x)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
