#include "main.h"

/**
 * print_triangle - prints triangle made from #
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size + 1) - i; j++)
			{
				if (j > 1)
				{
				_putchar(' ');
				}
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
