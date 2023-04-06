#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * @x: int input
 *
 * @y: checks second input
 *
 * Return: returns power
 */

int _pow_recursion(int x, int y)
{
	int power = 0;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		power = x * _pow_recursion(x, y - 1);
	}
	return (power);
}
