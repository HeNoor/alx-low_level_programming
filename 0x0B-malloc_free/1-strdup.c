#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: char input
 * Return: returns a pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 1; str[i] != '\0'; i++)
	{
	}
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j]; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
