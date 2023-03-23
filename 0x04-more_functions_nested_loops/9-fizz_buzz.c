#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints number with fizz buzz
 *
 * Return: Always 0 (Access)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && !(i % 5 == 0))
		{
			printf("Fizz");
		}
		if (i % 5 == 0 && !(i % 3 == 0))
		{
			printf("Buzz");
		}
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
