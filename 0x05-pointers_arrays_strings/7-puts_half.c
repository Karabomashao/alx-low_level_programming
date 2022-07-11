#include "main.h"
#include <string.h>

/**
 * puts_half - pints last half of string
 * @str: parameter
 */
void puts_half(char *str)
{
	int i, j, n, len_str;

	len_str = strlen(str);
	n = (len_str - 1) / 2;
	for (i = n; i <= len_str - 1; i++)
	{
		if (n % 2 == 0)
		{
			for (j = n + 1; j <= len_str - 1; j++)
			{
				_putchar(str[j]);
			}
			break;
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
