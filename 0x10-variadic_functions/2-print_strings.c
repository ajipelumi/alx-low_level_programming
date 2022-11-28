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
	va_list ap; /* define argument list */
	char *ptr;
	unsigned int i;

	va_start(ap, n); /* initialize argument list */
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *); /* get the next argument value */
		if (ptr == NULL) /* if there is no value */
		{
			printf("(nil)");
		}
		else /* there is a value */
		{
			printf("%s", ptr);
		}
		if (separator && i != (n - 1)) /* check if last integer is met */
		{
			printf("%s", separator);
		}
	}
	va_end(ap); /* clean up */
	printf("\n");
}
