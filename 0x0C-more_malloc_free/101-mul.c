#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _puts - Entry point
 *
 * @str: checks input of function
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
/**
 * _atoi - Entry point
 *
 * @s: char input
 *
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int number = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
		{
			sign = sign * (-1);
		}
		else if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			number = (number * 10) + (*(s + i) - '0');
			if (*(s + i + 1) < '0' || *(s + i + 1) > '9')
			{
				break;
			}
		}
		i++;
	}
	return (number * sign);
}
/**
 * print_int - Entry point
 * @n: int
 * Return: return 0
 */
void print_int(unsigned long int n)
{
	unsigned long int div = 1, i, res;

	for (i = 0; n / div > 9; i++, div = div * 10)
		;
	for (; div >= 1; n = n % div, div = div / 10)
	{
		res = n / div;
		_putchar('0' + res);
	}
}

/**
 * main - Entry point
 * @argc: int
 * @argv: char
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
