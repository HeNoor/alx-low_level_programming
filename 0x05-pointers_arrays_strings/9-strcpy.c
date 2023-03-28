#include "main.h"

/**
 * _strcpy - Entry point
 *
 * @dest: char input
 *
 * @src: char input
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = -1; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
