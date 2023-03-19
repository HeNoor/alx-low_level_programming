#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;
	int m;
	int n;

	for (l = 48; l <= 57; l++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (n = 48; n <= 57; n++)
			{
				if (n > m && m > l)
				{
					putchar(l);
					putchar(m);
					putchar(n);
					if (l + m + n != 168)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
