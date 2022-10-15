#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 *
 * @ap: a list of argument pointing
 * to the character to be printed
 *
 * Return: void
*/

void print_char(va_list ap)
{
	char c = va_arg(ap, int);

	printf("%c", c);
}

/**
 * print_int - prints an integer
 *
 * @ap: a list of argument pointing
 * to the character to be printed
 *
 * Return: void
*/

void print_int(va_list ap)
{
	int i = va_arg(ap, int);

	printf("%d", i);
}

/**
 * print_float - prints a decimal number
 *
 * @ap: a list of argument pointing
 * to the character to be printed
 *
 * Return: void
*/

void print_float(va_list ap)
{
	float f = va_arg(ap, double);

	printf("%f", f);
}


/**
 * print_string - prints a string
 *
 * @ap: a list of argument pointing
 * to the character to be printed
 *
 * Return: void
*/

void print_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
	{
	printf("(nil)");
	return;
	}
	printf("%s", str);
}

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *separator = "";
	va_list ap;
	print_func ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);
	i = 0; /* start of our format string */
	while (format && format[i])
	{
	j = 0;
	/**
	* start of our struct "ops". We have only structured
	* four (4) characters in our format string meaning only four (4)
	* characters will return a function if found in our format string.
	*/
		while (j < 4 && (format[i] != *(ops[j]).s))
		{
		j++;
		/**
		* the first character in our format string will be scanned
		* through our four (4) structured characters, if the first character does
		* not match, it increases j to the next character until there is a match,
		* it ignores if there is no match.
		*/
		}
		if (j < 4)
		{
		printf("%s", separator);
		ops[j].f(ap);
		separator = ", ";
		}
	i++;
	}
	printf("\n");
	va_end(ap);
}
