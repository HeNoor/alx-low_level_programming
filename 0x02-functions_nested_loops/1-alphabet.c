#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints_alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char chr;

	for (chr = 'a'; chr <= 'z'; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
}
