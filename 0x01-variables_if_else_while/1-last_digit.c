#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n, Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_digit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Last_digit);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Last_digit);
	}
	if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_digit);
	}
	return (0);
}
