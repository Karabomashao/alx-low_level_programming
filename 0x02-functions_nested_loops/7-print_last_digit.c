#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: parameter
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int s;
	s = n % 10;
	if (s < 0)
		s = -s;
	_putchar(s + '0');
	return (s);
}
