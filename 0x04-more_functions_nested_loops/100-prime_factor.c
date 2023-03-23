#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description: find the premier factor of a number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i;
	long int maxfact;
	long int n;
	n = 612852475143;
	maxfact = -1;

	while (n % 2 == 0)
	{
		maxfact = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			maxfact = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		maxfact = n;
	}
	printf("%ld\n", maxfact);
	return (0);
}
