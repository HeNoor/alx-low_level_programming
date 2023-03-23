#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * prime_factor - Entry point
 *
 * Description: find the premier factor of a number
 *
 * @n: checks input of function
 *
 * Return: Always 0 (Success)
 */

void prime_factor(long int n)
{
	long int i;
	long int maxfact;

	while (n % 2 == 0)
	{
		maxfact = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
			maxfact = i;
		}
	}
	if (n > 2)
	{
		maxfact = n;
	}
	printf("%ld\n", maxfact);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	prime_factor(612852475143);

	return (0);
}
