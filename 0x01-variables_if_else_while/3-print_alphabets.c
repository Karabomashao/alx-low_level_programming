#include <stdio.h>

/**
 * main - return aA-zZ
 *
 *Return: true if 0 false otherwise
 */
int main(void)
{
	char ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}

