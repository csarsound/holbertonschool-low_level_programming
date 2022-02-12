#include <stdio.h>

/**
 * main - Print al the numbers singles
 * Return: Always 0
 */

int main(void)
{
	int sin;

	for (sin = '0'; sin <= '9'; ++sin)
	{
	if (sin != '0')
	{
		putchar(',');
		putchar(' ');
	}
	putchar(sin);
	}
	putchar('\n');

	return (0);
}
