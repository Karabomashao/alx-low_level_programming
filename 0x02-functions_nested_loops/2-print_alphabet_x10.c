#include <stdio.h>
#include <main.h>

/**
 * main - Entry point
 * Return: Always 0 (successful)
 */
int main(void)
{
	int i;
	char a;

	for (i = 1; i <= 10; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			putchar('\n');
		}
	}
	putchar('\n');
	return (0);
}
