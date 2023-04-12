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
	for (i = 0; str[i] != 0; i++)
	{
		s = malloc((i + 1) * sizeof(char));
	}
	for (j = 0; str[j]; j++)
	{
		s[j] = str[j];
	}
	if (s == NULL)
	{
		return(NULL);
	}
	return (s);
}
