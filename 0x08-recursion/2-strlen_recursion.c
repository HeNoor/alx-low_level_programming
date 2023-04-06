#include "main.h"

/**
 * _strlen_recursion - Entry point
 *
 * @s: char input
 *
 * Return: Always 0 (Success)
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*(s + len) != '\0')
	{
		len = len + _strlen_recursion(s + 1);
		len++;
	}
	return (len);
}
