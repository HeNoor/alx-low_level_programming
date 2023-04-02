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
		if (*(str + i) <= 'z' && *(str + i) >= 'a')
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
			}
			else
			{
				for (j = 0; j != '\0'; j++)
				{
					if (str[i - 1] == array[j])
						str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
