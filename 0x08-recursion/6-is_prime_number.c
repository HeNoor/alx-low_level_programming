#include "main.h"

/**
 * is_prime_number - function that returns 1 if n is a prime number
 * @n: int input
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n >= 1)
		return (prime_number(n));
	else
		return (0);
}

/**
 * prime_number - function that checks if n is a prime number
 * @k: int input
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int prime_number(int k)
{
	if ((k % 1 == 0) && (k % k == 0))
		return (1);
	else
		return (0);
}
