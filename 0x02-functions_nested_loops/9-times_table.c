#include "main.h"
/**
 * times_table - numbers of the table
 * Return: times table
 */
void times_table(void)
{
	int w, l, m;

	for (w = 0; w <= 9; w++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (l = 1; l <= 9; l++)
		{
			m = (w * l);
			if ((m / 10) > 0)
			{
				_putchar((m / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((m % 10) + '0');
			if (l < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}


