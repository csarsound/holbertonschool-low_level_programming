#include "main.h"
/**
 * _atoi - function that print just the integers
 * @s: string
 * Return: Nothing
 **/
int _atoi(char *s)
{
	int i = 0, menos = 1, end = 1;
	unsigned int integer = 0;

	for (i = 0; s[i] != '\0' && end; i++)
	{
		if (s[i] == '-')
		{
			menos *= -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			integer *= 10;
			integer += s[i] - '0';
		}
		else if (integer > 0)
		{
			end = 0;
		}
	}
	integer *= menos;
	return (integer);
}
