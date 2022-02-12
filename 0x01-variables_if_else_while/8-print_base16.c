#include <stdio.h>

/**
 * main - designated start of the program
 * Return: Always 0
 */

int main(void)
{
		char base;

		for (base = '0'; base <= '9'; base++)
		putchar(base);

		for (base = 'a'; base <= 'f'; base++)
		putchar(base);

		putchar('\n');

	return (0);
}	
