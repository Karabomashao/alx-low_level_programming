#include "main.h"
#include <string.h>

/**
 * _strncpy - function copies a string
 * @n: size of bytes
 * @dest: parameter string
 * @src: parameter of second string
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
