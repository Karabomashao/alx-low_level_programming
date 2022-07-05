#include "main.h"

/**
 * print_alphabet - print alphabet in lower cases
 * Return: Always 0 (succesful)
 */
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
