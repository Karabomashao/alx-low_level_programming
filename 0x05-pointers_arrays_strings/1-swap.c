#include "main.h"

/**
 * swap_int - swaps the values of two variables
 * @a: parameter a
 * @b: parameter b
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
