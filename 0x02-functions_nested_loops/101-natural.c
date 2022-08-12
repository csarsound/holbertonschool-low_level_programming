#include <stdio.h>

/**
 * main - Function for sum the multiples of 3 and 5
 * Return: Always 0
 */
int main(void)
{
	int x, sum;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
		{
			sum += x;
		}
	}
}
