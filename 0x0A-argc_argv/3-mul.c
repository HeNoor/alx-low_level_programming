#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: int input
 * @argv: char input
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
