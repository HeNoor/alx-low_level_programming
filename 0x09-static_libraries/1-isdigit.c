#include "main.h"

/**
 * _isdigit - Entry point
 *
 * Description: checks if c is a digit
 *
 * @c: checks input of function
 *
 * Return: returns 1 if c is a digit and 0 if it is not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
