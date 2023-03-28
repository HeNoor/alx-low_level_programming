#include "main.h"

/**
 * print_rev - Entry point
 *
 * @s: checks input of function
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int a, count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (a = count - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
