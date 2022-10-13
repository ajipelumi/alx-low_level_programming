#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
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
	va_list ap;
	unsigned int i, len;
	char *ptr;
	char *separator = "";

	va_start(ap, format);
	len = strlen(format);
	while (format && format[i] && i < len)
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
		ptr = va_arg(ap, char *);
		if (ptr == NULL)
		{
		printf("(nil)");
		return;
		}
		printf("%s%s", separator, ptr);
	default:
		i++;
		continue;
	}
	separator = ", ";
	i++;
	}
	va_end(ap);
	printf("\n");
}
