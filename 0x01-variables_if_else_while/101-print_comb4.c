#include <stdio.h>

/**
 * main - function main
 * Return: 0
 */

int main(void)
{
	int num, num2, num3, coma = 0;

	for (num = 0; num <= 9; num++)
	{
		for (num2 = (num + 1); num2 <= 9; num2++)
		{
			for (num3 = (num2 + 1); num3 <= 9; num3++)
			{
				putchar (num + '0');
				putchar (num2 + '0');
				putchar (num3 + '0');
				coma++;
				if (coma < 120)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
