#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;

	while (n < 57)
	{
		putchar(n);
		putchar(44, 32);
		n++;
		if (n == 57)
		{
			putchar(n);
			continue;
		}
	}
	putchar('\n');
	return (0);
}
