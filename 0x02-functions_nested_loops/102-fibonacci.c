#include <stdio.h>

/**
 * main - function that print numbers fibonacci 
 * Return: Always 0
 */ 
int main(void)
{
	int index, num1 = 1, num2 = 2, sum;

	printf("%d, ", num1);
	printf("%d, ", num2);
	for (index = 0; index <= 50; index++)
	{
		sum = (num1 + num2);
		printf("%d, ", sum);
		num1++;
		num2++;
		if (index == 50)
		{
			printf("\n");
			return (0);
		}
	}
}
