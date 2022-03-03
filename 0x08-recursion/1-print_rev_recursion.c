#include "main.h"

/**
 * _print_rev_recursion - return revers string
 * @s: pointer that follow the char that print
 * Return: zero
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
