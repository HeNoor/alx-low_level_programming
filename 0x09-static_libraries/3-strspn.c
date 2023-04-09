#include "main.h"

/**
 * _strspn - Entry point
 *
 * @s: char input
 * @accept: second char input
 *
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int len = 0;

	if (*(s + i) == '\0' || *(accept + i) == '\0')
	{
		return (0);
	}
	while (accept[len] != '\0')
	{
		len++;
	}
	while (*(s + i) != '\0')
	{
		while (*(accept + j))
		{
			if  (*(s + i) == *(accept + j))
			{
				i++;
				j = 0;
				continue;
			}
			else
			{
				if (j == (len - 1))
				{
					return (i);
				}
				else
				{
					j++;
					continue;
				}
			}
		}
	}
	return (i);
}
