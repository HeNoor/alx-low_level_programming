#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: char input
 *
 * Return: Always 0 (Succes)
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = 1 + _strlen_recursion(s + 1);
	}
	return (len);
}
