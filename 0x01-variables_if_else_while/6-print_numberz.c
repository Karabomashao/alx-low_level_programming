#include <stdio.h>

/**
 * main - Returns base 10 digits
 * Return: True if 0 false otherwise
 */
int main(void)
{
	int dig;

	for (dig = 0; dig <= 9; dig++)
	{
		putchar(dig + '0');
	}
	putchar('\n');
	return (0);
}
