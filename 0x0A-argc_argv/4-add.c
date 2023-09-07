#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: int input
 * @argv: char input
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *i;

	while (--argc)
	{
		for (i = argv[argc]; *i; i++)
		{
			if (*i < '0' || *i > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
