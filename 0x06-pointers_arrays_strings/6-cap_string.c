#include "main.h"
#include <stdio.h>

/**
 * cap_string - Entry point
 *
 * @str: char input
 *
 * Return: returns str
 */

char *cap_string(char *str)
{
	int i = 0;
	int j = 0;
	char array[] = " \t\n,;.!?\"(){}";

	while (*(str + i))
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (array[j] == str[i - 1])
					{
						str[i] = str[i] - 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}
