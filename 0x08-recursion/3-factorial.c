#include "main.h"

/**
 * factorial - Entry point
 *
 * @n : int input
 *
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	int fact = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		fact = n * factorial(n - 1);
	}
	return (fact);
}
