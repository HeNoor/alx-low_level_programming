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
	unsigned int m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}
	if ((m / 10) > 0)
		_putchar((m / 10) + 48);
	_putchar((m % 10) + 48);
}
