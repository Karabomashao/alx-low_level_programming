#include <stdio.h>

/**
 * main - > for the programm
 * Return: 0 if true false otherwisg
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
