#include "main.h"

/**
 * print_diagonal - print diagonal line in terminal
 * @n: parameter
 */
void print_diagonal(int n)
{
	int column, i;
	char diagonal;

	diagonal = '\\';
	for (column = 1; column <= n; column++)
	{
		if ( n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(diagonal);
			_putchar('\n');
			for (i = 1; i <= column; i++)
			{
				if (column < n)
				{
					_putchar(' ');
				}
			}
		}
	}
}
