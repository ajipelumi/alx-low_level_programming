#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap; /* define argument list */
	unsigned int i;

	va_start(ap, n); /* initialize argument list */
	for (i = 0; i < n; i++)
	{
		/* get the next argument value */
		printf("%d", va_arg(ap, int));
		if (separator != NULL) /* if separator exist */
		{
			if (i != (n - 1)) /* check if last integer is met */
			{
				printf("%s", separator);
			}
		}
	}
	va_end(ap); /* clean up */
	printf("\n");
}
