#include "main.h"

/**
 * string_toupper - change lowrcase for uppercase
 * @n: letters
 * Return: to n letters
 */

char *string_toupper(char *n)
{
	int a = 0;

	while (n[a])
	{
		if (n[a] >= 97 && n[a] <= 122)
		{
			n[a] -= 32;
		}
		a++;
	}
	return (n);
}
