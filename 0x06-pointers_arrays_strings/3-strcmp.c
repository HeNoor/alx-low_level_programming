#include "main.h"

/**
 * _strcmp - Entry point
 *
 * @s1: char input
 * @s2: char input
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int cmp = 0;
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (*s1 != *s2)
		{
			cmp = ((int)*s1 - 48) - ((int)*s2 - 48);
		}
	}
	return (cmp);
}
