#include "main.h"

/**
* print_alphabet_x10 - Prints a to z ten times followed by a new line
*
* Return: 0
*/

void print_alphabet_x10(void)
{
	int line, alpha;

	for (line = 0; line <= 9; line++)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	_putchar(alpha);
	_putchar('\n');
	}
}
