# include <stdio.h>
/**
 * main - function that print the sum of all the pair numbers
 * @void: nothing
 * Return: Always 0.
 */

int main(void)
{
	int i;
	unsigned long int sum1 = 1, sum2 = 2, sumt = 0, next;

	for (i = 0; i <= 33; i++)
	{
		if (sum1 < 4000000 && (sum1 % 2) == 0)
		{
			sumt = sumt + sum1;
		}
		next = sum1 + sum2;
		sum1 = sum2;
		sum2 = next;
	}
	printf("%lu\n", sumt);

	return (0);
}
