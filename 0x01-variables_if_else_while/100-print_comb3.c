#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			if (n == m)
			{
				continue;
			}
			else if (n > m)
			{
				continue;
			}
			else
			{
				putchar(n);
				putchar(m);
				if (n == 8 && m == 9)
				{
					continue;
				}
				else 
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
