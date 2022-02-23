#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str: and string parameter as a pointer
 * Return: half puts
 */

void puts_half(char *str)
{

	int j = 0;
	int n =  0;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 1)
	{
		for (n = 0; str[n] != '\0'; n++)
		{
			if (n >= j / 2)
				_putchar(str[n]);
		}
	}
	else
	{
		for (n = 0; str[n] != '\0'; n++)
		{
			if (n >= j / 2)
				_putchar(str[n]);
		}
	}
	_putchar('\n');
}

