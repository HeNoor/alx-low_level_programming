#include "main.h"

/**
 * _print_rev_recursion - Entry point
 *
 * @s: char input
 *
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + i + 1);
		_putchar(*(s + i));
	}
}
