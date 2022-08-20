#include <stdio.h>
/**
 * main - function that print the first 98 numbers fibonacci
 * @void: nothing
 * Return: Always o.
 */
int main(void)
{
	unsigned long int i, sum1 = 1, sum2 = 1;

	printf("%lu, ", sum1);

	for (i = 1; i <= 49; i++)
	{
		sum1 = sum1 + sum2;
		if (i < 49)
		{
			printf("%lu, ", sum1);
		}
		else
		{
			printf("%lu", sum1);
		}
		sum2 = sum1 + sum2;
		if (i < 49)
		{
			printf("%lu, ", sum2);
		}
	printf("\n");
	return (0);
}
