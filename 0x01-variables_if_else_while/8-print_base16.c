#include <stdio.h>

/**
 * main - Print all hex characters
 * Return: successful = 0
 */
int main(void)
{
	char n, ch;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (ch = 'A'; ch <= 'F'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}	
