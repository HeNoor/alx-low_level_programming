#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: prints every minute of the day of Jack Bauer
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
			_putchar(':');
			_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
			_putchar('\n');
		}
	}
}
