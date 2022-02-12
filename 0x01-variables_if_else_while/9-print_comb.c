#include <stdio.h>

/**
 * main - Print al the numbers singles
 * Return: Always 0
 */

int main(void)
{
	int sin;

	for (sin = '0'; sin <= 9; sin++)
	{
		putchar(sin + '0');
	if (sin < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}

	return (0);
}
