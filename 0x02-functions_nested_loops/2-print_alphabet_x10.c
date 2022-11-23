#include "main.h"

/**
* print_alphabet_x10 - prints a to z ten times followed by a new line
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int line, alpha;

	/* loop from 0 to 9 */
	for (line = 0; line <= 9; line++)
	{
		/* iterate through alphabets */
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha); /* print alphabets */
		}
		_putchar('\n'); /* print newline */
	}
}
