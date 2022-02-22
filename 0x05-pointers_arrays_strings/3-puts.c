#include "main.h"

/**
 * _puts - print string
 * @str: string type pointer
 * Return: of string
 */

void _puts(char *str)
{
	int capricho;

	capricho = 0;

	while (str[capricho] != '\0')
	{
		_putchar(str[capricho]);
	}
	_putchar('\n');
}
