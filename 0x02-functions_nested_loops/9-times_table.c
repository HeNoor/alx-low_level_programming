#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: prints the nine times table starting with zero
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 1; i <= 9; i++)
	{
		_putchar(48);
		for (j = 0; j <= 9; j++)
		{
			x = j * i;
			if (x > 9)
			{
				_putchar((x / 10) + 48);
				_putchar((x % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(x + 48);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
