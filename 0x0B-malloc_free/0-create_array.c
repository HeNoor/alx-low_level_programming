#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Entry point
 * @size: unsigned int input
 * @c: char input
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
