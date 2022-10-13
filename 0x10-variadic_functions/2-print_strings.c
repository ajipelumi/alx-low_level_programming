#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ptr;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
	ptr = va_arg(ap, char *);
	if (ptr == NULL)
	{
	printf("(nil)");
	}
	printf("%s", ptr);
	if (separator && i != (n - 1))
	printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
