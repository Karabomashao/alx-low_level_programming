#include "main.h"
#include <string.h>

/**
 * _strpbrk - searchesa string for any set of bytes.
 * @s: parameter s
 * @accept: parameter accept
 * Return: ponter in bytes s
 *
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
