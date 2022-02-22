#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str: and string parameter as a pointer
 * Return: half puts
 */

void puts_half(char *str)
{

	int n = 0;
	int i;

	while (str[n] != '\0')
	{
		n++;
	}
	i = n / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
