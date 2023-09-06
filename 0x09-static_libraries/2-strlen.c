#include "main.h"

/**
 * _strlen - Entry point
 *
 * @s: checks input of function
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		count++;
	}

	return (count);
}
