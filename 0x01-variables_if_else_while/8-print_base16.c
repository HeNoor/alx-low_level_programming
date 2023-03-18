#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 48;
	int h = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (h <= 102)
	{
		putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
