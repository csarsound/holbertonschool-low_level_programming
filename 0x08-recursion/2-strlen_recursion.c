#include "main.h"

/**
 * _strlen_recursion - function that print lenght of a string
 * @s: pointer that count the chars in the string
 * Return: *s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (*s);
}
