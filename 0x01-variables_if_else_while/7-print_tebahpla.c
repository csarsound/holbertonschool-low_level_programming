#include <stdio.h>

/**
 * main - designated start of the program
 * Return: Always 0
 */

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	putchar(alp);
	putchar('\n');

	return (0);
}
