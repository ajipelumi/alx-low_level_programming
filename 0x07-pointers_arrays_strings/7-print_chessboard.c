#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: chessboard(array) to be printed
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++) /* loop through array */
	{
		for (j = 0; j < 8; j++) /* loop through string */
		{
			_putchar(a[i][j]); /* print one character at a time */
		}
		_putchar('\n'); /* print newline */
	}
}
