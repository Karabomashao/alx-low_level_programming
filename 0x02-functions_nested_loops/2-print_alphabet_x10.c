#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets 10 times
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 1; i <= 10; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}	_putchar('\n');
	}
	
}
