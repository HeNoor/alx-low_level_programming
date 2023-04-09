#include "main.h"
/**
 * _memcpy - Entry point
 *
 * @dest: char input
 * @src: char input
 * @n: unsigned int input
 *
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; n--, i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
