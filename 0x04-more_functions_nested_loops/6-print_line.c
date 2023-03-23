#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: draws a straight line in the terminal
 *
 * @n: checks input of function
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i <= n; i++)
		{
			_putchar(95);
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
