#include <stdio.h>

/**
 * main -
 *
 *Return -
 */
int main(void)
{
	char ch, CH;

	for (ch = 'a' && CH = "A"; ch <= 'z' && CH <= 'Z'; ch++, CH++)
	{
		putchar(ch);
		putchar(CH);
	}
	putchar('/n');
	return (0);
}

