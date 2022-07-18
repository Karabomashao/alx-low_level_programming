#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: parameter dest
 * @src: parameter src
 *@n: int n
 * Return; copied memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
