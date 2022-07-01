#include <stdio.h>

/**
 * main - Return a-z except q and e
 *
 * Return: true if 0 false otherwise
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
