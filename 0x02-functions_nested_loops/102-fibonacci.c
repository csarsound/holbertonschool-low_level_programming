#include <stdio.h>

/**
 * main - function that print numbers fibonacci
 * Return: Always 0
 */
int main(void)
{
	int index;
	unsigned long sum, num1 = 1, num2 = 2;

	if (num1 == 1 && num2 == 2)
	{
	printf("%lu, ", num1);
	printf("%lu, ", num2);
	}
	for (index = 0; index < 50; index++)
	{
		sum = (num1 + num2);
		printf("%lu", sum);
		num1++;
		num2++;
		if (index == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
