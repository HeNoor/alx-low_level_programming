#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: prints the last digit of a number
 *
 * @n: checks input of function
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = (n % 10) * (-1);
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar(last_digit + 48);
	return (last_digit);
}
