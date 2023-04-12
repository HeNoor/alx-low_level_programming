#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Entry point
 * @ac: int input
 * @av: char input
 * Return: Always 0 (Success)
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	int l = 0;
	int k = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			l++;
		}
	}
	l = l + ac;
	s = malloc(l * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		if (s[k] == '\0')
			s[k++] = '\n';
	}
	return (s);
}
