#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (successful)
 */
int main(void)
{
	int a, b, c;

	for (a = 0; a <= 7; a++)
	{
		for (b = 1; b <= 8; b++)
		{
			for (c = 2; c <= 9; c++)
			{
				if (b > a && b < c)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
				}
				if (a < b && a < c && a != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n')
	return (0)
}

