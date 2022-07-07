#include "main.h"

/**
 * more_numbers - prints number 0 - 14, 10 x times
 */
void more_numbers(void)
{
	int row, column, counter;
	int constant_var;

	constant_var = 1;
	for (row = 0;  row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			_putchar(column + '0');
		}
		for (counter = 0; counter <= 4; counter++)
		{
			_putchar(constant_var +'0');
			_putchar(counter +'0');
		}
		_putchar('\n');
	}
}
