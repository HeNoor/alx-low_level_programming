#include "main.h"

/**
 * is_prime_number - Entry point
 *
 * @n: checks input of function
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 * prime - Entry point
 *
 * @n: checks input of function
 * @i: checks second input
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */
int prime(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (prime(n, i + 1));
}

