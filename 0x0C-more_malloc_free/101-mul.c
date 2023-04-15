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
	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
