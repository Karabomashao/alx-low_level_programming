#include "main.h"

/**
 * print_number - print an interger
 * @n: value to be printed
 */
void print_number(int n)
{
	char c[n] = "n";
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
