#include <stdio.h>

/**
 * main -  print numbers 1 to 100
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 1; n < 100; n++)
		if (n % 15 == 0)
			printf("FizzBuzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else if printf("%d ", n);

	printf("Buzz");
	printf("\n");

	return (0);
}
