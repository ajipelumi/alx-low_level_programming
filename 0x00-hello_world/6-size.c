#include <stdio.h>
/**
 * main - main
 *
 * Return: 0
 */
int main(void)
{
	char s;
	int n;
	long int a;
	long long int c;
	float k;

	printf("Size of a char: %i byte(s)\n", sizeof(s));
	printf("Size of an int: %i byte(s)\n", sizeof(n));
	printf("Size of a long int: %i byte(s)\n", sizeof(a));
	printf("Size of a long long int: %i byte(s)\n", sizeof(c));
	printf("Size of a float: %i byte(s)\n", sizeof(k));
	return (0);
}
