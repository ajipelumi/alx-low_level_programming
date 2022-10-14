#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, len;
	va_list ap;
	char *separator = "", *ptr;

	va_start(ap, format);
	len = strlen(format);
	if (format)
	{
	while (format[i] && i < len)
	{
	switch (format[i])
	{
		case 'c':
			printf("%s%c", separator, va_arg(ap, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(ap, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(ap, double));
			break;
		case 's':
			ptr =  va_arg(ap, char *);
			if (ptr == NULL)
			{
			printf("(nil)");
			return;
			}
			printf("%s%s", separator, ptr);
			break;
		default:
			i++;
			continue;
	}
	separator = ", ";
	i++;
	}
	}
	printf("\n");
	va_end(ap);
}
