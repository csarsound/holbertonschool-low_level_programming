#include "main.h"
/**
 * puts2 - puts a value
 * @str: and string parameter as a pointer
 * Return: puts2
 */

void puts2(char *str)
{

	int j = 0;

	while (str[j] != '\0')
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
		j++;
	}
	_putchar('\n');
}
