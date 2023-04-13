#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - Entry point
 *
 * @b: unsigned int input
 *
 * Return: Returns a pointer to the allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
