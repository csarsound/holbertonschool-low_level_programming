#include <stdio.h>

/**
 * main - Function main
 * Return: Alwais 0
 */

int main(void)
{
	int num, num2, coma = 0;

	for (num = 0; num <= 9; num++)
	{
		for (num2 = (num + 1); num2 <= 9; num2++)
		{
			putchar(num + '0');
			putchar(num2 + '0');
			coma++;
			if (coma < 45)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
