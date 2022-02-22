#include "main.h"
/**
 * puts2 - puts a value
 * @str: and string parameter as a pointer
 * Return: puts2
 */

void puts2(char *str)
{

	int counter = 0;

	while (str[counter] != '\0')
	{
		if (counter % 2 == 0)
		{
			_putchar(str[counter]);
		}
		counter++;
	}
	_putchar('\n');
}
