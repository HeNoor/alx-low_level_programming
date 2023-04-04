#include "main.h"

/**
 * _strpbrk - Entry point
 *
 * @s: char input
 * @accept: char input second
 *
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	if (*(s + i) == '\0' || *(accept + j) == '\0')
	{
		return (0);
	}
	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				return (&(*(s + i)));
			}
			else
			{
				j++;
				continue;
			}
		}
		i++;
	}
	return (0);
}
