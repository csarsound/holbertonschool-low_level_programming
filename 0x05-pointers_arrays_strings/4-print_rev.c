#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: pointer
 * Return: print
 */

void print_rev(char *s)
{
	int st;

	for (st = 0; s[st] != '\0'; st++)
		;
	while (st)
	{
		_putchar(s[st - 1]);
		st--;
	}
	_putchar('\n');
}
