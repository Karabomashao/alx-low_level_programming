#include <stdio.h>

/**
 * main - returns base 10 digits
 * Retun - True if 0 false otherwise
 */
int main(void)
{
	char dig;

	for (dig = '0'; dig <= '9'; dig++)
	{
		putchar(dig);
	}
	putchar('\n');
	return (0);
}
