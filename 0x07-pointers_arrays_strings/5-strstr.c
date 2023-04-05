#include "main.h"

/**
 * _strstr - Entry point
 *
 * @haystack: char input
 * @needle: char input second
 *
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	int len = 0;
	int j = 0;
	int  i = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*(needle + len) != '\0')
	{
		len++;
	}
	while (*(haystack + i) != '\0')
	{
		for (j = 0; j < len; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			if (j == len - 1)
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (0);
}
