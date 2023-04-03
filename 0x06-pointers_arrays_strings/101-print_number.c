#include "main.h"

/**
 * print_number - Entry point
 *
 * @n: checks input
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	unsigned int m;

	m = n;
	if (n < 0)
	{
		_putchar(45);
		m = -n;
	}
	if (m / 10 != 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + 48);
}
