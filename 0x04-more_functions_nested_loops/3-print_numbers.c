#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
