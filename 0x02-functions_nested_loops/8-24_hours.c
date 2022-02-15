#include "main.h"
/**
 * jack_bauer - function for print every minute of the day
 * Return: all minute of the day, and lines count
 */
void jack_bauer(void)
{
	int  h, hT, m, mT;

	for (h = 48; h <= 50; h++)
	{
		for (hT = 48; hT < 58; hT++)
		{
			for (m = 48; m < 54; m++)
			{
				for (mT = 48; mT < 58; mT++)
				{
					if (h < 50)
					{
						_putchar(h);
						_putchar(hT);
						_putchar(':');
						_putchar(m);
						_putchar(mT);
						_putchar('\n');
					}
					if (h == 50 && (hT == 48 || hT == 49 || hT == 50 || hT == 51))
					{
						_putchar(h);
						_putchar(hT);
						_putchar(':');
						_putchar(m);
						_putchar(mT);
						_putchar('\n');
					}
				}
			}
		}
	}
}

