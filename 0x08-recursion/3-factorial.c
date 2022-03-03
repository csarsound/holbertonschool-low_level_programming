#include "main.h"

/**
 *  factorial - function that print the factorial of a number
 *  @n: poiter that multiply the numbers between theirs
 *  Return: n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
