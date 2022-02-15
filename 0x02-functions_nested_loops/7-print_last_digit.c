#include "main.h"
/**
 * print_last_digit - function that prints last digit number
 * @n: numbers
 * Return: the value of the las digit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = (n % 10);
	if (lastDigit < 0)
	{
		lastDigit = (lastDigit * -1);
	}
	_putchar (lastDigit + '0');
	return (lastDigit);
}
