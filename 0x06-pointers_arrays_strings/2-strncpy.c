#include "main.h"

/**
 * _strncat - Entry point
 *
 * @dest: char input
 * @src: char input
 * @n: int input
 *
 * Return: return a pointer to the resulting dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (n < i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
