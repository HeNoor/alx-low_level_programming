#include "main.h"

/**
 * _memset - Entry point
 * @s: char input
 * @b: char input
 * @n: unsigned int input
 * Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; n--, i++)
	{
		*(s + i) = b;
	}
	return (s);
}
