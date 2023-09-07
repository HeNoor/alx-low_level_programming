#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Entry point
 * @ptr: void pointer
 * @old_size: unsigned int input
 * @new_size: unsigned int input
 * Return: Always 0 (Success)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
		{
			return (NULL);
		}
		return (ptr1);
	}
	if (new_size > old_size)
	{
		ptr1 = malloc(new_size);
		if (ptr1 == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			*(ptr1 + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (ptr1);
}
