#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 s
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator != NULL)
	{
	if (n != 0)
	{
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(ap, int));
	printf("%s", separator);
	}
	printf("\n");
	}
	}
	va_end(ap);
}
