#include "main.h"

/**
 * print_diagonal - times of print diagonal
 * @n: numbers of space
 * Return: Numeros de n
 */

void print_diagonal(int n)
{
	int l;
	int e;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (e = 0; e < l; e++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
