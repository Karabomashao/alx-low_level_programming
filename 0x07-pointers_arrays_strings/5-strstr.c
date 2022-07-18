#include "main.h"
#include <string.h>

/**
 * _strstr - functions that locates a substing
 * @haystack: parameter 1
 * @needle: parameter 2
 * Return: location of substring
 *
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
