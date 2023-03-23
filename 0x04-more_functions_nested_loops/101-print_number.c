#include "main.h"

/**
 * print_number - Entry points
 *
 * Description: prints an integer
 *
 * @n: checks input of function
 *
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	else
	{
		m = n;
	}
	if ((m / 10) > 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + 48);
}
