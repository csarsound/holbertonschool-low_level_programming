#include "main.h"

/**
 * rev_string - reverse string
 * @s: string type poninter
 * Return: string
 */

void rev_string(char *s)
{
	int u, d, temp;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	u--;
	d = 0;
	while (d < u)
	{
		temp = s[u];
		s[u] = s[d];
		s[d] = temp;
		u--;
		d++;
	}
}
