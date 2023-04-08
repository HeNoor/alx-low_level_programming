#include "main.h"

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
	int number = 0;
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
