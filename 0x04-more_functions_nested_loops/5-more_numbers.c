#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: prints ten times the numbers from zero to
 *
 * Return: Always 0 (Sucess)
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(49);
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
