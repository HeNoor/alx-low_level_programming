#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - funct that executes a fct given as param element of arr
 *
 * @array: array int
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
