#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_char - prints char
 * @list: va_list
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - prints int
 * @list: va_list
 */

void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - prints float
 * @list: va_list
 */

void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - prints string
 * @list: va_list
 */

void print_string(va_list list)
{
	char *s;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - A variadic function that prints anything
 * @format: list of all arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	char *separator = "";
	int i, j = 0;
	va_list list;

	datatype choice[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	va_start(list, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (choice[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", separator);
				choice[i].func(list);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(list);
	printf("\n");
}
