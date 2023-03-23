#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: draws a diagonal line on the terminal
 *
 * @n: checks input of fucntion
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n >= 1)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
