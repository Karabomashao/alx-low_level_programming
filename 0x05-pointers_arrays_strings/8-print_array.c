#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @a: array a
 * @n: parameter n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i < n)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
