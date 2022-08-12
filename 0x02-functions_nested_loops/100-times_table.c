#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Function for print multiply tables
 * @n: size of the table
 * Return: Always 0
 */

void print_times_table(int n)
{
	int multiply, multiply2, result, value, max;

	value = n;
	max = 9;
	if (value < 0 || value > 15)
	return;
	for (multiply2 = 0; multiply2 <= n; multiply2++)
	{
		for (multiply = 0; multiply <= value; multiply++)
		{
			result = (multiply * multiply2);
			if (result <= max)
			{
				_putchar(result + '0');
				if (multiply < value)
				print_spaces();
			}
			else if (result > 9 && result < 100)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				if (multiply < value)
				print_spaces2();
			}
			else
			{
				_putchar((result / 100) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
				if (multiply < value)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			if (multiply == value)
				_putchar('\n');
		}
	}
}

/**
 * print_spaces - function that print the multiplier <9
 * @void: nothing Enter
 * Return: always 0;
 */
void print_spaces(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');
}

/**
 * print_spaces2 - function that print the multiplier >9
 * @void: nothing Enter
 * Return: always 0;
 */
void print_spaces2(void)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
}
