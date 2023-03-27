#include "main.h"

/**
 * swap_int - Entry point
 *
 * @a: checks input of function
 *
 * @b: checks input two of function
 *
 * Return: Always 0 (Succes)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
