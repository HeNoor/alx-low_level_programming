#include "main.h"

/**
 * _sqrt_recursion - Entry point
 *
 * @n: int input
 *
 * Return: returns the natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square(n, 0));
}

/**
 * square - Entry point
 *
 * @n: int input
 * @r: checks second input
 *
 * Return: returns the natural square root of a number
 */

int square(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	if (r * r > n)
	{
		return (-1);
	}
	return (square(n, r + 1));
}
