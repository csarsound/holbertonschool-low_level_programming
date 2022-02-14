#include "main.h"
/**
 * _islower - checks lowercase character
 * @c: is the character of islower
 * Return: 1 if int c is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
