#include <stdio.h>

/**
 * main - Entry point
 * @argc: int input
 * @argv: char input
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc != 0)
	{
		printf("%s\n", argv[i]);
		argc--;
		i++;
	}
	return (0);
}
