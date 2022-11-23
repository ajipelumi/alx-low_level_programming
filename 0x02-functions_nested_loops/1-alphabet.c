#include "main.h"

/**
* print_alphabet - prints a to z followed by a new line
*
* Return: void
*/

void print_alphabet(void)
{
	char i;

	/* loop through alphabets */
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i); /* print alphabets */
	}
	_putchar('\n'); /* print newline */
}
