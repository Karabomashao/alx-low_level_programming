#include "main.h"
#include <string.h>

/**
 * _strncat - function concatenates two strings
 * @dest: parameter of first string
 * @src: parameter of second string
 * @n: parameter of size of bytes
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
