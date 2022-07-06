#include "main.h"

/**
 * times_table - print 9 times-tables from 0
 *
 */
void times_table(void)
{
	int  row, column, multiplier;
	
	for (row = 0; row <= 9; row++)
	{
		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');
		for (column = 1; column <= 9; column++)
		{
			multiplier = row * column;
			if ((multiplier / 10) > 0)
			{
				_putchar((multiplier / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((multiplier % 10) + '0');
			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

