#include <stdio.h>

/**
 * main - prints the name of the file it was compiled
 * from, followed by a new line
 *
 * void: no input required
 *
 * Return: 0
 */

int main(void)
{
	/**
	 * __FILE__ is a standard predefined macro
	 * that expands to the name of the current file.
	 * The file takes the form of a string constant.
	 */
	printf("%s\n", __FILE__);
	return (0);
}
