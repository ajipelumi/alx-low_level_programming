#include"main.h"

/**
 * main - prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++) /* loop through "_putchar" */
	{
		_putchar(str[i]); /* print character */
	}
	_putchar('\n'); /* print newline */
	return (0);
}
