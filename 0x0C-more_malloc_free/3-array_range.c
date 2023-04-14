#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Entry point
 * @min: first int input
 * @max: second int input
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *str;
	int i;

	if (min > max)
		return (NULL);
	str = malloc((max - min + 1) * sizeof(int));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
	{
		str[i] = min + i;
	}
	return (str);
}
