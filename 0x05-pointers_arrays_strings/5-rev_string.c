#include "main.h"

/**
 * rev_string - Entry point
 *
 * @s: checks input of function
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int b, c, a = 0;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;

	}
}
