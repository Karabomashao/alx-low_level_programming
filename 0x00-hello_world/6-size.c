#include <stdio.h>

/**
 * main - returns sizes of various types
 * Return: 0 if true else non-zero
 */

int main(void)
{
	int i;
	long int li;
	char c;
	long long int lli;
	float f;


	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of long int: %lu.\n", (unsigned long)sizeof(li));
	printf("size of long long int: %lu.\n", (unsigned long)sizeof(lli));
	printf("Size of float: %lu.\n", (unsigned long)sizeof(f));

	return (0);

}
