#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Descriptiopn: prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int chr;

	for (chr = "a"; chr <= "z"; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
	return (0);
}
