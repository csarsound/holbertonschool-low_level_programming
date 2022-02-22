#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str: and string parameter as a pointer
 */

void puts_half(char *str)
{

	int j = 0;
	int i;

	while (str[j] != '\0')
	{
		j++;
	}
	i = j / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
