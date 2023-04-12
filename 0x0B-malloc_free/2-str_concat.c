#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point
 * @s1: first char input
 * @s2: second char input
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2;
	int i;
	char *s;

	if (s1 == NULL)
	{
		return ('\0');
	}
	if (s2 == NULL)
	{
		return ('\0');
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{
	}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{
	}
	s = malloc((size1 + size2) * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
		{
			s[i] = s1[i];
		}
		else
		{
			s[i] = s2[i - size1];
		}
	}
	s[i] = '\0';
	return (s);
}
