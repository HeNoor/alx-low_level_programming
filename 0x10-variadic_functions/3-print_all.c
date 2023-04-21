#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * form_char - Entry point
 * @separator: the string to be printed between
 * @args: pointer
 * Return: 0
 */
void form_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * form_int - Entry point
 * @separator: the string to be printed between
 * @args: pointer
 * Return: 0
 */
void form_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * form_float - Entry point
 * @separator: the string to be printed between
 * @args: pointer
 * Return: 0
 */

void form_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * form_string - entry point
 * @separator: the string to be printed between
 * @args: pointer
 * Return: 0
 */

void form_string(char *separator, va_list args)
{
	char *str = va_arg(args, char *);
	switch ((int)(!=str))
		case 1:
			str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_all - entry point
 * @format: format
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j;
	va_list args;
	all_t all[] = {
		{"c", form_char},
		{"i", form_int},
		{"f", form_float},
		{"s", form_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (all[j].all)
		{
			if (format[i] == all[j].all[i])
			{
				all[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
