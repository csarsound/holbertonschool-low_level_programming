#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet x10
 * Return: loop
 */
void print_alphabet_x10(void)
{
	int l, r;

	r = 0;

	while (r <= 9)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		r++;
		_putchar('\n');
	}
}
