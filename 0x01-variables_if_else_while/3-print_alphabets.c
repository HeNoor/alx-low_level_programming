#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122 && m <= 90)
	{
		putchar(n);
		putchar(m);
	}
	putchar('\n');
	return (0);
}
