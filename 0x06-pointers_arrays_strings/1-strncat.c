#include "main.h"

/**
 * _strncat - Entry point
 *
 * @dest: char input
 * @src: char input
 * @n: int input
 *
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; dest[len] != '\0'; len++){}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	return (dest);
}
