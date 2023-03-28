#include "main.h"

/**
 * puts_half - Entry point
 *
 * @str: checks input of function
 *
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int i, count = 0;

	for (count = 0; str[count] != '\0'; count++)
	{
		count++;
	}
	for (i = count / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
