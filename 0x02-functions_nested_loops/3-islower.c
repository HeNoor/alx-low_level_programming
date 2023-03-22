#include "main.h"
/**
 * _islower - Entry point
 *
 * Description: check if a character is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if c is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
