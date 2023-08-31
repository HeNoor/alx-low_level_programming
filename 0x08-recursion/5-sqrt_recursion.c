#include "main.h"

/**
 * _sqrt_recursion - function that return natural square of n
 * @n: int input
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (square(n, 0));
}

/**
 * square - Entry point
 *
 * @n: first int input
 * @k: seconc int input
 *
 * Return: return natural square of n
 */

int square(int n, int k)
{
	if (k * k == n)
		return (k);
	if (k * k > n)
		return (-1);
	else
		return (square(n, k + 1));
}
