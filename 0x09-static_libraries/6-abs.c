#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: computes the absolute value of an integer
 *
 * @n: checks input of function
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
