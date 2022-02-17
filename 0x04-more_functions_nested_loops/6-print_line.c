#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: Parameter of times
 * Return: 0 Value
 */

void print_line(int n)
{
	char l = '_';
	int t = n;

	for (t = 0; t <= n; t++)
	{
		if (t != 0)
			_putchar(l);
	}
	_putchar('\n');
}
