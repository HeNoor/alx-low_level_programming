#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: check if a number is positive, negative or nul
 *
 * @n: checks input of function
 *
 * Return: returns 1 if positive, 0 if zero, -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
