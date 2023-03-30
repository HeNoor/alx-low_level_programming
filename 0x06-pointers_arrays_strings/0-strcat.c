#include "main.h"

/**
 * _strcat - Entry point
 *
 * @dest: char input destination
 *
 * @src: char input source
 *
 * Return: returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, length = 0;

	for (length = 0; dest[length] != '\0'; length++)
	{
		length++;
	}
	i = 0;
	for (j = length + 1; src[i] != '\0'; j++)
	{
		dest[j] = src[i];
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
