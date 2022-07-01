#include <stdio.h>

/**
 *main - use a putchar function to display a-z alphaberts
 *Return true if 0 else otherwise 
 */
int main(void)
{
	int ch;

	for (ch = "a"; ch <= "z"; ch++)
	{
		putchar(ch);
	}
	return (0);
}
