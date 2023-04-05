#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * @s: char input
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*(s + i));
		_puts_recursion(s + i + 1);
	}
}
