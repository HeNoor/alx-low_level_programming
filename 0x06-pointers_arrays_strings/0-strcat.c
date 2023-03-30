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
	int i, length = 0;

	for (length = 0; dest[length] != '\0'; length++)
	{
		length++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
