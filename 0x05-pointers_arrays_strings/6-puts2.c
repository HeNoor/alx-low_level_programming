#include "main.h"

/**
 * puts2 - Entry point
 *
 * @str: checks input of function
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
