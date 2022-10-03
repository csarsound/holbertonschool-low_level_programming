#include <stdio.h>
/**
 * main - function that print the first 98 numbers fibonacci
 * @void: nothing
 * Return: Always o.
 */
int main(void)
{
	int i;
	unsigned long int initial = 0, initial2 = 1, generade = 0;

	for (i = 1; i <= 98; i++)
	{
	generade = initial + initial2;
	initial = initial2;
	initial2 = generade;
	printf("%ld, ", generade);
	}
	return (0);
}
