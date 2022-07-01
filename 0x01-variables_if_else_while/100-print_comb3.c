#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (successful)
 */
int main(void)
{
	int n, m;

	for (n = 0; n<=9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (n == m)
				continue;
			putchar(n + '0');
			putchar(m + '0');
			if (n != m && m != n)
			{
				putchar(',');
				putchar(' ')
			}
		}
	}
	putchar('\n');
	return (0);
}

