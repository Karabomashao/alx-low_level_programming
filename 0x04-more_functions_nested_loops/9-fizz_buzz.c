#include <stdio.h>

/**
 * main - Print fissbuzz
 * Return: always 0 (successful)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 != 0) && (i % 5 != 0))
		{
			printf("%d", i);
			putchar(' ');
		}
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
