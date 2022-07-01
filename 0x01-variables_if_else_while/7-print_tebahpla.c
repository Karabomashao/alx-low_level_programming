#include <stdio.h>

/**
 * main - > for the programm
 * Return - 0 if true 
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
