#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character 
 * @str: parameter
 */
void puts2(char *str)
{
	int i;
	int len_str = strlen(str);

	for (i = 0; i <= len_str; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
